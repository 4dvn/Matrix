#ifndef SYSTEM_H
#define SYSTEM_H

#include <Arduino.h>
#include "MatrixVariable.h"
#include "MatrixParameter.h"

class MatrixSystem
{
public:
  MatrixSystem();
  //Sysex Set
  void reset();
  void EnterBootloader();
  void InitializeDevice();
  void UpdateColourPaletteRGB();
  void UpdateColourPaletteWRGB();
  void ResetColourPalette();
  void setGamma(bool state);
  void UpdateCustomKeyMap();
  void ResetCustomKeyMap();
  void SetBrightness(int Brightness);
  void SetTouchSensitive(int Sensitive);

  //Sysex Get
  void GetDeviceInfo();
  void GetModuleCount();
  void GetModuleInfo();
  void GetAllParameter();
  void GetColorPaletteRGB();
  void GetColorPaletteWRGB();
  void GetGammaState();
  void GetCustomKeyMap();
  void GetBrightness();
  void GetTouchSensitive();

  //Math
  uint8_t XYtoIndex(uint8_t X,uint8_t Y);
  //uint8_t XYtoIndex(uint8_t X,uint8_t Y);
};

#endif