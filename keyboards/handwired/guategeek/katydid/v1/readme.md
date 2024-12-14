# Guategeek Katydid


![Katydid](http://files.guategeek.com/keyboards/katydid/g2_katydid_wiring_diagram_v2.jpg)


This is a handwired build where I started with the [dactyl-cc](https://github.com/qmk/qmk_firmware/tree/master/keyboards/handwired/dactyl_cc) and modified the case as well as adding one extra switch. It is utalising a [16mb USB-C RP2040 Pi Pico clone](https://www.aliexpress.us/item/3256804863724174.html) from AliExpress, and the [Amoeba King single switch PCBs](https://github.com/climent/keyboard-pcbs/tree/king_v1.2/amoeba-king) (Note that these are a pain to solder but with a fine point soldering iron, some magnification glasses and practice I was able to get the hang of it).

* Keyboard Maintainer: [Guategeek](https://github.com/guategeek)
* Hardware Supported: Purple 16mb Chinese Pico, Ameba King Single Switch PCBs
* Hardware Availability: https://www.aliexpress.us/item/3256804863724174.html


Make example for this keyboard (after setting up your build environment):

    make handwired/g2_katydid:querty

Flashing example for this keyboard:

    make handwired/g2_katydid:querty:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
