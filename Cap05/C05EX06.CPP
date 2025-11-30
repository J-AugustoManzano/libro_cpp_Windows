// C05EX06.CPP
// Suma y verificacion de paridad

#include <iostream>
#include <string>

using namespace std;

void pausa(void)
{
  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
}

int16_t sumax(int16_t a, int16_t b, string &mensaje)
{
  if (a % 2 == 0 and b % 2 == 0)
    mensaje = "Los valores proporcionados son pares";
  else 
    if (a % 2 != 0 and b % 2 != 0)
      mensaje = "Los valores proporcionados son impares";
    else
      mensaje = "Los valores proporcionados son mixtos";
  return a + b;
}

int main(void)
{
  int16_t v1, v2;
  string m;

  cout << "Ingrese el primer valor .: "; cin >> v1;
  cin.ignore(80, '\n');

  cout << "Ingrese el segundo valor ..: "; cin >> v2;
  cin.ignore(80, '\n');

  cout << "Resultado de la suma .....: " << sumax(v1, v2, m);
  cout << endl;
  cout << "Estado de los valores ....: " << m;
  cout << endl;

  pausa();
  return 0;
}
