#!/bin/bash

qmk_default="$HOME/qmk_firmware"
read -rp "qmk directory: [$qmk_default]: " qmk_path

if [[ "$qmk_path" ]]; then
    echo "$qmk_path"
else
    qmk_path="$qmk_default"
fi

echo "$qmk_path"

while :; do
read -rp "update all? (Y/n): " update_all
    if [[ "$update_all" == "Y" ]];then
        for board in "handwired/"*;do
            qmk_kb="$qmk_path/keyboards"
            board_path="$qmk_kb/${board%/*}"
            if [[ ! -d "$board_path" ]];then
                echo "Creating directory in $board_path"
                mkdir -p "$board_path"
            fi
            dest_path="$qmk_kb/$board"
            echo "Copying $board to $dest_path"
            rsync -a --exclude=case "$board/" "$dest_path"
        done
        break
    elif [[ "$update_all" == "n" ]];then
        while :;do
            read -rp "Update specific board? (board_path/n): " update_specific
            if [[ "$update_specific" == "n" ]];then
                break
            elif [[ "$update_specific" ]];then
                update_spec_parent="${update_specific%/*}"
                if [[ -d "$update_spec_parent" ]];then
                    update_path="$qmk_path/keyboards/$update_specific"
                    echo "Copying $update_specific to $update_path"
                    rsync -a --exclude=case "$update_specific/" "$update_path"
                    break 2
                else
                    echo "$update_spec_parent does not exist - create the parent directory first - exiting"
                    exit 1
                fi

            fi
        done
        break
    fi
done
