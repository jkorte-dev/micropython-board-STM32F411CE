# STM32F411CE Blackpill by WeAct Studio 

This board definition supports the STM32F411CE (Blackpill) board by WeAct Studio which comes with 0/4/8/16 MiB of external flash.

Documentation of the board can be found in the vendors git repository [WeActStudio.MiniSTM32F4x1](https://github.com/WeActStudio/WeActStudio.MiniSTM32F4x1)

## Build notes

By default the firmware with 8MiB flash is built. Other variants can be
configured by using the `BOARD_VARIANT` parameter. The valid options are
`FLASH_4M`, `FLASH_8M`, `FLASH_16M`, and `NO_FLASH`.

```
   $ cd ports/stm32
   $ make BOARD=WEACT_STM32F411CE BOARD_VARIANT=FLASH_4M submodules all  # Build the 4 MiB variant
```

## Important note
If you you have an old V2 of board you have to change line
```
#define VERSION_V20 (0)
to 
#define VERSION_V20 (1)
```
in mpconfigboard.h or use the `NO_FLASH` variant
