// C02EX15.CPP

#include <iostream>
#include <print>

using namespace std;

int main(void)
{
  int16_t valor = 10;

  println("Valor decimal .................: {}", valor);
  println("Valor binario .................: {:b}", valor);
  println("Valor octal ...................: {:o}", valor);
  println("Valor hexadecimal (minuscula) .: {:x}", valor);
  println("Valor hexadecimal (mayuscula) .: {:X}", valor);

  println("");
  print("Presione <Enter> para finalizar... ");
  cin.get();
  return 0;
}
