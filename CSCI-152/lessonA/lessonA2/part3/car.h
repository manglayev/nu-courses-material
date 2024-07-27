#include <string>
/*
car should be declared as a class not as a struct
CORRECT: class car
WRONG: struct car
*/
struct car
{
  /*
  * Invariant: ((speed > 0.0) IMPLIES engine_on) AND (0,0 <= speed <= max_speed)
  */
  bool engine_on;
  double speed;
  const double max_speed;
  const std::string vin;

public:
  /*
  * Precondition: max_speed_c > 0.0
  * Postcondition: (speed = 0)
                    AND (NOT engine_on)
                    AND (max_speed = max_speed_c)
                    AND (vin = vin_c)
    Exceptional
      Conditions: THROW invalid_argument IF max_speed > 0.0
  */
  car(double max_speed_c, std::string vin_c);
  /*
  * Postcondition: engine_on
                  AND PRESERVE(speed)
                  AND (RESULT = NOT(OLD(engine_on))
  */
  bool turn_on();
  /*
  * Precondition: speed = 0.0
  * Postcondition: NOT(engine_on)
                    AND (speed = 0.0)
                    AND (RESULT = OLD(engine_on))
    Exceptional
      Conditions: THROW invalid_argument IF speed > 0.0
  */
  bool turn_off();
  /*
  * Postcondition: (speed = 0.0) AND PRESERVE(engine_on)
  */
  void press_brake();
  /*
  * Precondition: pressure >= 0.0
  * Postcondition: (IF (engine_on) THEN
                    speed = MIN(max_speed, OLD(speed) + pressure)
                    ELSE PRSERVE (speed))
                    AND PRESERVE (engine_on)
    Exceptional
      Conditions: THROW invalid_argument IF pressure < 0.0
  */
  void press_gas_pedal(double pressure);
  /*
  * Postcondition: RESULT = speed
  */
  double get_speed() const;
  /*
  * Postcondition: RESULT = engine_on
  */
  double is_engine_on() const;
  /*
  * Postcondition: RESULT = max_speed
  */
  double get_max_speed() const;
  /*
  * Postcondition: RESULT = vin
  */
  std::string get_vin() const;
  /*
  * Postcondition: TRUE
  */
  ~car();
};
