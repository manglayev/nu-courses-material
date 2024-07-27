#include <iostream>
#include "car.h"

void output_state(car my_car_f)
{
  std::cout<<"Car: "<<my_car_f.get_vin()<<(my_car_f.is_engine_on() ? ". Engine is running":". Engine is off")
  <<" speed: "<<my_car_f.get_speed()<<"\n";
}

int main()
{
  car my_car(170.0, "Z 001 ZZZ");
  output_state(my_car);
  my_car.turn_on();
  output_state(my_car);
  for(unsigned int i = 0; i < 10; i++)
  {
    std::cout<<"pressing the gas pedal... \n";
    my_car.press_gas_pedal(25.0);
    output_state(my_car);
  }
  my_car.press_brake();
  output_state(my_car);
  
  try
  {
    my_car.turn_off();
  }
  catch(std::exception &ex)
  {
    std::cout<<"oops! "<<ex.what()<<"\n";
  }
  output_state(my_car);
  return 0;
}
