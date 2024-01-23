MCU_SERIES = f4
CMSIS_MCU = STM32F411xE
AF_FILE = boards/stm32f411_af.csv
LD_FILES = boards/stm32f411.ld boards/common_ifs.ld
TEXT0_ADDR = 0x08000000
TEXT1_ADDR = 0x08020000

# MicroPython settings
MICROPY_VFS_LFS2 = 1

ifeq ($(BOARD_VARIANT),)
# Configure mpconfigboard.h.
CFLAGS += -DWEACT_FLASH_8M
FROZEN_MANIFEST ?= $(BOARD_DIR)/manifest.py
endif

ifeq ($(BOARD_VARIANT),NO_FLASH)
# Configure mpconfigboard.h.
CFLAGS += -DWEACT_NO_FLASH
endif

ifeq ($(BOARD_VARIANT),FLASH_4M)
# Configure mpconfigboard.h.
CFLAGS += -DWEACT_FLASH_8M
FROZEN_MANIFEST ?= $(BOARD_DIR)/manifest.py
endif

ifeq ($(BOARD_VARIANT),FLASH_8M)
# Configure mpconfigboard.h.
CFLAGS += -DWEACT_FLASH_8M
FROZEN_MANIFEST ?= $(BOARD_DIR)/manifest.py
endif

ifeq ($(BOARD_VARIANT),FLASH_16M)
# Configure mpconfigboard.h.
CFLAGS += -DWEACT_FLASH_18M
FROZEN_MANIFEST ?= $(BOARD_DIR)/manifest.py
endif
