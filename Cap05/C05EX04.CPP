// C05EX04.CPP
// Programa Factorial

#include <iostream>
using namespace std;

void pausa(void)
{
  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
}

void factorial(uint16_t n, uint64_t &fact)
{
  uint16_t i;
  fact = 1;
  for (i = 1; i <= n; i++)
    fact *= i;
}

int main(void)
{
  uint16_t x;
  uint64_t y;
  cout << "Calculo de factorial" << endl;
  cout << "\nIngrese un valor entero: "; cin >> x;
  cin.ignore(80, '\n');
  factorial(x, y);
  cout << "\nFactorial de " << x << " = a: " << y << endl;
  pausa();
  return 0;
}
