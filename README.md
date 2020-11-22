# How to compile and program QMK on the Ergodox Infinity
## Update the keymap
1. Load the layout.json into the [QMK Configurator](https://config.qmk.fm/#/ergodox_infinity/LAYOUT_ergodox) and make needed changes
2. Convert the layout.json into date for keymap.c:
   ```
   docker run -it --rm \
     -v $PWD/layout.json:/layout.json \
     qmkfm/qmk_firmware \
     qmk json2c /layout.json
   ```
3. Paste the output of this command (excluding the #include) between the `Generated block` comment into keymap.c

## Build the keymap
1. Build the left image:
   ```
   docker run -it --rm \
     -v $PWD:/qmk_firmware/keyboards/ergodox_infinity/keymaps/docker-mount \
     -v $PWD/build:/build \
     qmkfm/qmk_firmware \
     bash -c "make ergodox_infinity:docker-mount; cp /qmk_firmware/ergodox_infinity_docker-mount.bin /build/left.bin"
   ```
2. Build the right image:
   ```
   docker run -it --rm \
     -v $PWD:/qmk_firmware/keyboards/ergodox_infinity/keymaps/docker-mount \
     -v $PWD/build:/build \
     qmkfm/qmk_firmware \
     bash -c "make ergodox_infinity:docker-mount MASTER=right; cp /qmk_firmware/ergodox_infinity_docker-mount.bin /build/right.bin"
   ```
