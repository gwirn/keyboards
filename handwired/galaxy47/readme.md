# handwired/galaxy47

![handwired/galaxy47](imgur.com image replace me!)

A simple ortholinear 47 key keyboard to be 3D printed and hand wired.

* Keyboard Maintainer: [gwirn](https://github.com/gwirn)
* Hardware Supported:
    *   Controller: waveshare RP2040-zero
    *   Switches: any MX switch
    *   Diodes: 1N4148
    *   Wire: 1mm copper wire or equivalent
    *   Khail hot swap sockets (optional)
    *   M2 screws
    *   heat threaded inserts

Make example for this keyboard (after setting up your build environment):

    make handwired/galaxy47:default

Flashing example for this keyboard:

    make handwired/galaxy47:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
