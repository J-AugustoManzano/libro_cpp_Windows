// C04EX03.CPP

#include <iostream>

using namespace std;

int main(void)
{
  uint16_t n, i = 1;
  uint16_t fat {1};

  cout << "Programa Factorial" << endl << endl;
  cout << "Factorial de que valor: "; cin >> n;
  cin.ignore(80, '\n');

  do
    {
      fat *= i;
      ++i;
    }
  while (i <= n);

  cout << endl;
  cout << "Factorial de " << n << " = "<< fat << endl;
  cout << endl;

  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
