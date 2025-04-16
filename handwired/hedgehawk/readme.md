# handwired/iridiumhawk

![handwired/iridiumhawk](imgur.com image replace me!)

A 36 key bend, tilted, ergo keyboard for comfy wrist angles while being small and portable.
Successor to the [iridiumhawk](https://github.com/gwirn/keyboards/tree/master/handwired/iridiumhawk) with the main differences being a 2mm inward moved thumb cluster, outward tilted half's by 12° and the angle between the half's changed from 39.1° to 45°.
Inside the body there are standoffs that can be used to guide the copper wire so no insulation is needed between rows and columns.

* Keyboard Maintainer: [gwirn](https://github.com/gwirn)
* Hardware Supported:
    *   Controller: (waveshare) RP2040-zero
    *   Switches: any MX switch
    *   Diodes: 1N4148
    *   Wire: 1mm copper wire or equivalent
    *   M2 screws
    *   M2 heat threaded inserts

Make example for this keyboard (after setting up your build environment):

    make handwired/iridiumhawk:default

Flashing example for this keyboard:

    make handwired/iridiumhawk:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
