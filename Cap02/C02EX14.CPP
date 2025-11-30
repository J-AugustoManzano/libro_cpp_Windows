// C02EX14.CPP

#include <iostream>
#include <print>

int main(void)
{
  std::string nombre = "Bjarne Stroustrup";
  uint16_t edad = 76;

  std::print("{} posee {} anos.\n", nombre, edad);

  std::println("");
  std::print("Presione <Enter> para finalizar... ");
  std::cin.get();
  return 0;
}
