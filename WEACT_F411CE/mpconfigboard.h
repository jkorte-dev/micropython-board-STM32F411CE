// based on https://github.com/WeActTC/WeAct_F411CE-MicroPython.git board definition from WeAct
#if defined WEACT_FLASH_4M
#define MICROPY_HW_BOARD_NAME       "WeAct Studio Core 4MB" 
// Use the external flash  
#define MICROPY_HW_ENABLE_INTERNAL_FLASH_STORAGE (0)
// 4MB Flash 32Mbit
#define MICROPY_HW_SPIFLASH_SIZE_BITS (32 * 1024 * 1024)

#elif defined WEACT_FLASH_8M
#define MICROPY_HW_BOARD_NAME       "WeAct Studio Core 8MB" 
// Use the external flash  
#define MICROPY_HW_ENABLE_INTERNAL_FLASH_STORAGE (0)
// 8MB Flash 64Mbit
#define MICROPY_HW_SPIFLASH_SIZE_BITS (64 * 1024 * 1024)

#elif defined WEACT_FLASH_16M
#define MICROPY_HW_BOARD_NAME       "WeAct Studio Core 16MB" 
// Use the external flash  
#define MICROPY_HW_ENABLE_INTERNAL_FLASH_STORAGE (0)
// 16MB Flash 128Mbit
#define MICROPY_HW_SPIFLASH_SIZE_BITS (128 * 1024 * 1024)

#else
// Use the built-in flash  
#define MICROPY_HW_BOARD_NAME       "WeAct Studio Core" 
#define MICROPY_HW_ENABLE_INTERNAL_FLASH_STORAGE (1)
#endif

#define MICROPY_HW_MCU_NAME         "STM32F411CE"

#define MICROPY_PY_THREAD           (1)

/* BOARD Ver 2.0 set 1 ，other set 0 ex.V1.3,V2.1 */
#define VERSION_V20 (0)

#define MICROPY_HW_HAS_SWITCH       (1)
#define MICROPY_HW_HAS_FLASH        (1)
#define MICROPY_HW_ENABLE_RTC       (1)
#define MICROPY_HW_ENABLE_USB       (1)
#define MICROPY_HW_ENABLE_ADC       (1)
#define MICROPY_HW_ENABLE_SERVO     (1)
#define MICROPY_HW_ENABLE_SDCARD    (0)
#define MICROPY_HW_ENABLE_RNG       (0)
#define MICROPY_HW_ENABLE_DAC       (0)

// HSE is 25MHz, CPU freq set to 96MHz
#define MICROPY_HW_CLK_PLLM (25)
#define MICROPY_HW_CLK_PLLN (192)
#define MICROPY_HW_CLK_PLLP (RCC_PLLP_DIV2)
#define MICROPY_HW_CLK_PLLQ (4)

// UART config
#define MICROPY_HW_UART1_TX     (pin_A9)
#define MICROPY_HW_UART1_RX     (pin_A10)

#define MICROPY_HW_UART2_TX     (pin_A2)
#define MICROPY_HW_UART2_RX     (pin_A3)

#define MICROPY_HW_UART6_TX     (pin_A11)
#define MICROPY_HW_UART6_RX     (pin_A12)

// #define MICROPY_HW_UART_REPL        PYB_UART_1
// #define MICROPY_HW_UART_REPL_BAUD   115200

// I2C busses
#define MICROPY_HW_I2C1_SCL (pin_B6)        // Arduino D15, pin 3 on CN10
#define MICROPY_HW_I2C1_SDA (pin_B7)        //         D14, pin 5 on CN10
#define MICROPY_HW_I2C2_SCL (pin_B10)       // Arduino D6,  pin 25 on CN10
#define MICROPY_HW_I2C2_SDA (pin_B9)        // Arduino D3,  pin 31 on CN10
#define MICROPY_HW_I2C3_SCL (pin_A8)        // Arduino D7,  pin 23 on CN10
#define MICROPY_HW_I2C3_SDA (pin_B8)        //              pin  1 on CN10

// SPI busses
#define MICROPY_HW_SPI1_NSS     (pin_A4)   //              pin 17 on CN7
#define MICROPY_HW_SPI1_SCK     (pin_A5)    // Arduino D13, pin 11 on CN10
#define MICROPY_HW_SPI1_MISO    (pin_A6)    // Arduino D12, pin 13 on CN10
#define MICROPY_HW_SPI1_MOSI    (pin_A7)    // Arduino D11, pin 15 on CN10

#define MICROPY_HW_SPI2_NSS     (pin_B12)   //              pin 16 on CN10
#define MICROPY_HW_SPI2_SCK     (pin_B13)   //              pin 30 on CN10
#define MICROPY_HW_SPI2_MISO    (pin_B14)   //              pin 28 on CN10
#define MICROPY_HW_SPI2_MOSI    (pin_B15)   //              pin 26 on CN10

#define MICROPY_HW_SPI3_NSS     (pin_A15)    // Arduino A2,  pin 32 on CN7
#define MICROPY_HW_SPI3_SCK     (pin_B3)    // Arduino D3,  pin 31 on CN10
#define MICROPY_HW_SPI3_MISO    (pin_B4)    // Arduino D5,  pin 27 on CN10
#define MICROPY_HW_SPI3_MOSI    (pin_B5)    // Arduino D4,  pin 29 on CN10

#define MICROPY_HW_SPI4_NSS     (pin_B12)   //              pin 16 on CN10
#define MICROPY_HW_SPI4_SCK     (pin_B13)   //              pin 30 on CN10
#define MICROPY_HW_SPI4_MISO    (pin_A1)    //              pin 30 on CN7
#define MICROPY_HW_SPI4_MOSI    (pin_A11)   //              pin 14 on CN10


#define MICROPY_HW_SPI5_NSS     (pin_B1)    //              pin 24 on CN10
#define MICROPY_HW_SPI5_SCK     (pin_A10)   //              pin 33 on CN10
#define MICROPY_HW_SPI5_MISO    (pin_A12)   //              pin 12 on CN10
#define MICROPY_HW_SPI5_MOSI    (pin_B0)    //              pin 34 on CN7

// I2S
#define MICROPY_HW_I2S2             (1)

// USRSW is pulled low. Pressing the button makes the input go high.
#define MICROPY_HW_USRSW_PIN        (pin_A0)
#define MICROPY_HW_USRSW_PULL       (GPIO_PULLUP)
#define MICROPY_HW_USRSW_EXTI_MODE  (GPIO_MODE_IT_RISING)
#define MICROPY_HW_USRSW_PRESSED    (0)

// LEDs
#define MICROPY_HW_LED1             (pin_C13) // Blue C13 LED on board
#define MICROPY_HW_LED_ON(pin)      (mp_hal_pin_low(pin))
#define MICROPY_HW_LED_OFF(pin)     (mp_hal_pin_high(pin))

// The pyboard has a 32.768kHz crystal for the RTC
#define MICROPY_HW_RTC_USE_LSE      (1)
#define MICROPY_HW_RTC_USE_US       (0)
#define MICROPY_HW_RTC_USE_CALOUT   (1)


#define MICROPY_HW_SPIFLASH_CS      (pin_A4)
#define MICROPY_HW_SPIFLASH_SCK     (pin_A5)

#if VERSION_V20
	#define MICROPY_HW_SPIFLASH_MISO    (pin_B4)
#else 
	#define MICROPY_HW_SPIFLASH_MISO    (pin_A6)
#endif

#define MICROPY_HW_SPIFLASH_MOSI    (pin_A7)


// spi flash
#if !MICROPY_HW_ENABLE_INTERNAL_FLASH_STORAGE

#define MICROPY_HW_SPIFLASH_ENABLE_CACHE (1)

extern const struct _mp_spiflash_config_t spiflash_config;
extern struct _spi_bdev_t spi_bdev;
#define MICROPY_HW_BDEV_SPIFLASH    (&spi_bdev)
#define MICROPY_HW_BDEV_SPIFLASH_CONFIG (&spiflash_config)
#define MICROPY_HW_BDEV_SPIFLASH_SIZE_BYTES (MICROPY_HW_SPIFLASH_SIZE_BITS / 8)
#define MICROPY_HW_BDEV_SPIFLASH_EXTENDED (&spi_bdev) // for extended block protocol

#endif

// USB config
#define MICROPY_HW_USB_FS (1)
#define MICROPY_HW_FLASH_FS_LABEL "WeActF411CE"
