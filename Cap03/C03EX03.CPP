// C03EX03.CPP

#include <iostream>
using namespace std;

int main(void)
{

  int32_t a, b, x;

  cout << "Ingrese el primer valor ...: "; cin >> a;
  cin.ignore(80, '\n');

  cout << "Ingrese el segundo valor ..: "; cin >> b;
  cin.ignore(80, '\n');

  cout << "\n";
  if (a > b)
  {
    x = a;
    a = b;
    b = x;
  }

  cout << "Los valores ordenados son: " << a;
  cout << " y " << b << "." << endl << endl;

  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
