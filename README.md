# Raspberry Pi Pico 2 bare metal application

## Designed to work with [SparkFun Pro Micro - RP2350](https://www.sparkfun.com/products/24870)

### NOTES on SDK
The sdk and tools for rp2350 are installed in `~/.pico-sdk/` with https://github.com/raspberrypi/pico-vscode/.
It can also be installed with prebuilt binaries preset at https://github.com/raspberrypi/pico-sdk-tools/releases/tag/v2.0.0-2. 
To use the tools and sdk installed to another location set the following :

```bash
export PICO_SDK_PATH=~/example_sdk/sdk/2.0.0/
export PICO_TOOLCHAIN_PATH=~/example_sdk/toolchain/13_2_Rel1
export picotool_DIR=~/example_sdk/picotool/2.0.0/picotool
```

#### How to build and flash

```bash
git clone https://github.com/disdi/bare-metal-riscv

cd bare-metal-riscv

make PICO_BOARD=sparkfun_promicro_rp2350 PICO_SDK_PATH=~/.pico-sdk/  build
```

After the compilation process is done, a binary file called print.uf2 is found in build directory.

To transfer this binary file to the Pico board, grab a micro USB cable and connect it to the development machine. Next hold down the BOOTSEL button on Pico and connect the other end of the USB cable while still holding the button down.

Pico will now show up as a mass storage device and the binary file can simply be copied over or use the below command:

```bash
make flash
```

The microcontroller will then restart by itself and start running our program otherwise press RESET button.

Connect a bi-directional logic level converter set at 3.3V between development machine and Pico with TX, RX and GND.
"RISC-V from RPI" should be seen on ttyUSB terminal.
