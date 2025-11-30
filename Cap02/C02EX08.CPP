// C02EX08.CPP

#include <iostream>
#include <cmath>

using namespace std;

const float PI = 3.141592; // o #define PI 3.141592

int main(void)
{
  float v, h, r;

  cout << "Ingrese la altura ...: ";
  cin >> h;
  cin.ignore(80, '\n');

  cout << "Ingrese el radio ....: ";
  cin >> r;
  cin.ignore(80, '\n');

  v = h * PI * pow(r, 2);

  cout << "Área del cilindro ..: " << v << endl;

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
