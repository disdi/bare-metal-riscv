# Raspberry Pi Pico 2 bare metal application

## Designed to work with [SparkFun Pro Micro - RP2350](https://www.sparkfun.com/products/24870)

### NOTES on SDK
The sdk and tools for rp2350 are installed in `~/.pico-sdk/` with https://github.com/raspberrypi/pico-vscode/
To use the tools and sdk installed to another location set the following :

```bash
export PICO_SDK_PATH=~/example_sdk/sdk/2.0.0/
export PICO_TOOLCHAIN_PATH=~/example_sdk/toolchain/13_2_Rel1
export picotool_DIR=~/example_sdk/picotool/2.0.0/picotool

```

How to build:

```bash
git clone https://github.com/disdi/bare-metal-riscv

cd bare-metal-riscv

make PICO_BOARD=sparkfun_promicro_rp2350 PICO_SDK_PATH=~/.pico-sdk/  build

make flash
```
