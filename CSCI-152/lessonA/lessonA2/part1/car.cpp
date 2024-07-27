#include "car.h"
#include <stdexcept>

  car::car(double max_speed_c, std::string vin_c): engine_on(false), speed(0.0), max_speed(max_speed_c), vin(vin_c) {}

  bool car::turn_on()
  {
    if(engine_on) return false;
    engine_on = true;
    return true;
  }
  bool car::turn_off()
  {
    if(!engine_on) return false;
    if(speed > 0) throw std::invalid_argument("Cannot turn off engine while car is moving!!!");
    engine_on = false;
    return true;
  }

  void car::press_brake()
  {
    speed = 0;
  }

  void car::press_gas_pedal(double pressure)
  {
    if(pressure < 0.0) throw std::invalid_argument("Pressure value cannot be less than 0");
    if(engine_on)
    {
      unsigned int new_speed = speed + pressure;
      if(new_speed > max_speed)
        speed = max_speed;
      else
        speed = new_speed;
    }
  }

  double car::get_speed() const
  {
    return speed;
  }

  double car::is_engine_on() const
  {
    return engine_on;
  }

  double car::get_max_speed() const
  {
    return max_speed;
  }

  std::string car::get_vin() const
  {
    return vin;
  }

  car::~car() {}
