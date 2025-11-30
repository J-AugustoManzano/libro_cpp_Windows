// C02EX19.CPP

#include <iostream>
#include <print>

using namespace std;

int main(void)
{
  println("Ceros a la izquierda ..: {:08}, {:08}", 10, -2);
  println("Espacios en blanco ....: {:8d}", 10);
  println("Sin espacios ..........: {:d}", 10);

  println("");
  print("Presione <Enter> para finalizar... ");
  cin.get();
  return 0;
}
