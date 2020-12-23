#pragma once

#include "frontends/retro/joypadbase.h"

#include <vector>
#include <map>


class Joypad : public JoypadBase
{
public:
  Joypad();

  virtual double getAxis(int i) const;

private:
  std::vector<std::map<unsigned, double> > myAxisCodes;
};