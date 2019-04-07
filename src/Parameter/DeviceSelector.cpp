#include "DeviceSelector.h"

extern u8 device_config = 0;

extern u8 led_pin = 0;
extern u8 powercord_pin = 0;

extern u32 led_color_correction = 0xFFFFFFFF;

//KeyPad
extern u8 so_data = 0;
extern u8 so_clock = 0;
extern u8 si_data = 0;
extern u8 si_clock = 0;
extern u8 si_scan = 0;

extern u8 fn_pin = 0;

//analog(TouchBar)
extern u8 analog0 = 0;
extern u8 analog1 = 0;
extern u8 analog2 = 0;
extern u8 analog3 = 0;
extern u8 analog4 = 0;
extern u8 analog5 = 0;
extern u8 analog6 = 0;
extern u8 analog7 = 0;
extern u8 analog8 = 0;
extern u8 analog9 = 0;
extern u8 analog10 = 0;
extern u8 analog11 = 0;
//I2C
extern u8 i2c_scl = 0;
extern u8 i2c_sda = 0;
//SPI
extern u8 spi_sck = 0;
extern u8 spi_miso = 0;
extern u8 spi_mosi= 0;
extern u8 spi_cs1 = 0;
extern u8 spi_cs2 = 0;
//Serial1 (USB-C)
extern u8 tx1 = 0;
extern u8 rx1 = 0;
//Serial3 (Matrix Mod)
extern u8 tx3 = 0;
extern u8 rx3 = 0;
//Serial2/4/5 (m2p futureproof)
extern u8 tx2 = 0;
extern u8 rx2 = 0;
extern u8 tx4 = 0;
extern u8 rx4 = 0;
extern u8 tx5 = 0;
extern u8 rx5 = 0;

//SerialAvailabble
extern bool usbmidi_available = 0;
extern bool usbcdc_available = 0;
extern bool serial1_available = 0;
extern bool serial2_available = 0;
extern bool serial3_available = 0;
extern bool serial4_available = 0;
extern bool serial5_available = 0;

extern bool support_wrgb = 0;

//EEPROM
extern bool eeprom_enable = 0;
extern u32 eeprom_user_adds_0 = 0;
extern u32 eeprom_user_adds_1 = 0;
extern u32 eeprom_palette_adds_0 = 0;
extern u32 eeprom_palette_adds_1 = 0;
extern u32 eeprom_sys_adds_0 = 0;
extern u32 eeprom_sys_adds_1 = 0;
extern u32 eeprom_pagesize = 0;

void loadDeviceConfig()
{
  #ifdef V120
  loadConfigV120();
  #endif

  #ifdef V150
  loadConfigV150();
  #endif

  switch(MATRIX_MODEL)
  {
    case MXPT: //MXTP

                          switch(MATRIX_VERSION)
                          {
                            // case 110:
                            // loadConfigV110();
                            // break;

                            case 120:
                            loadConfigV120();
                            break;

                            case 150:
                            loadConfigV150();
                            break;
                          }
    break;
  }
}