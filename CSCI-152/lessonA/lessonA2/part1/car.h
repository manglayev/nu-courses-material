#include <string>
class car
{

  bool engine_on;
  double speed;
  const double max_speed;
  const std::string vin;

public:
  car(double max_speed_c, std::string vin_c);

  bool turn_on();

  bool turn_off();

  void press_brake();

  void press_gas_pedal(double pressure);

  double get_speed() const;

  double is_engine_on() const;

  double get_max_speed() const;

  std::string get_vin() const;

  ~car();
};
