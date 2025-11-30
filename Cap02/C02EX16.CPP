// C02EX16.CPP

#include <iostream>
#include <print>

using namespace std;

int main(void)
{
  double valor = 3.14159;

  println("Valor con 2 decimales ........: {:.2f}", valor);
  println("Valor en notacion científica .: {:e}", valor);

  println("");
  print("Presione <Enter> para finalizar... ");
  cin.get();
  return 0;
}
