// C05EX05.CPP
// Programa Factorial

#include <iostream>
using namespace std;

void pausa(void)
{
  cout << "\nPresione <Enter> para finalizar... ";
  cin.get();
}

uint64_t factorial(int n)
{
  uint16_t i; 
  uint64_t fact = 1;
  for (i = 1; i <= n; i++)
    fact *= i;
  return fact;
}

int main(void)
{
  uint16_t x;
  cout << "Calculo de factorial\n";
  cout << "\nIngrese un valor entero: "; cin >> x;
  cin.ignore(80, '\n');
  cout << "\nFactorial de " << x << " = a: ";
  cout << factorial(x) << endl;
  pausa();
  return 0;
}
