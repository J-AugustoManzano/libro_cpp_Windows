// C02EX20.CPP

#include <iostream>
#include <print>

using namespace std;

int main(void)
{
  println("Positivo con signo ....: {:+}", 10);
  println("Con espacio en blanco .: {: }", 10);

  println("");
  print("Presione <Enter> para finalizar... ");
  cin.get();
  return 0;
}
