// C05EX03.CPP
// Programa Factorial

#include <iostream>
using namespace std;

void pausa(void)
{
  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
}

void factorial(uint16_t n)
{
  uint64_t fact {1};
  for (uint16_t i = 1; i <= n; i++)
    fact *= i;
  cout << "\nFactorial de " << n << " = a: " << fact << endl;
}

int main(void)
{
  uint16_t x;
  cout << "Calculo de factorial" << endl;
  cout << "\nIngrese un valor entero: "; cin >> x;
  cin.ignore(80, '\n');
  factorial(x);
  factorial(6);
  pausa();
  return 0;
}
