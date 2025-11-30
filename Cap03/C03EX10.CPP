// C03EX10.CPP

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
  float a, b, r;
  int32_t opcion;

  cout << setprecision(2) << fixed << right;

  cout << "Ingrese el valor <A>: ";
  cin >> a;
  cin.ignore(80, '\n');

  cout << "Ingrese el valor <B>: ";
  cin >> b;
  cin.ignore(80, '\n');

  cout << "\n";
  cout << "[1] - Adicion" << endl;
  cout << "[2] - Sustraccion" << endl;
  cout << "[3] - Multiplicacion" << endl;
  cout << "[4] - Division" << endl;
  cout << "\n";

  cout << "Elija una opcion: ";
  cin >> opcion;
  cin.ignore(80, '\n');

  if (opcion == 1)
    r = a + b;
  if (opcion == 2)
    r = a - b;
  if (opcion == 3)
    r = a * b;
  if (opcion == 4)
    if (b == 0)
      r = 0;
    else
      r = a / b;

  cout << "\nEl resultado es igual a: " << setw(5);
  cout << r << endl;
  cout << endl;

  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
