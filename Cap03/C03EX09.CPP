// C03EX09.CPP

#include <iostream>
#include <ciso646>

using namespace std;

int main(void)
{
  float a, b, c;

  cout << "Ingrese el lado <A>: "; cin >> a;
  cin.ignore(80, '\n');

  cout << "Ingrese el lado <B>: "; cin >> b;
  cin.ignore(80, '\n');

  cout << "Ingrese el lado <C>: "; cin >> c;
  cin.ignore(80, '\n');

  if (a < b + c and b < a + c and c < a + b)
    if (a == b and b == c)
      cout << "Triangulo Equilatero.";
    else
      if (a == b or a == c or c == b)
        cout << "Triangulo Isosceles.";
      else
        cout << "Triangulo Escaleno.";
  else
    cout << "Los valores no forman un triangulo.";

  cout << endl << endl;

  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
} 
