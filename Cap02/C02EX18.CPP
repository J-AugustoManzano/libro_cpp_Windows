// C02EX18.CPP

#include <iostream>
#include <print>

using namespace std;

int main(void)
{
  println("Izquierda ......: {:*<8}", 10);
  println("Derecha ........: {:*>8}", 10);
  println("Centrada .......: {:*^8}", 10);

  println("");
  print("Presione <Enter> para finalizar... ");
  cin.get();
  return 0;
}
