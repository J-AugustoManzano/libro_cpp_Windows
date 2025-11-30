// C02EX06.CPP

#include <iostream>

using namespace std;

int main(void)
{
  float ht, vh, pd, td, sb, sl;

  cout << "Introduzca horas trabajadas ...........: ";
  cin >> ht;
  cin.ignore(80, '\n');
  cout << "Introduzca valor hora de trabajo ......: ";
  cin >> vh;
  cin.ignore(80, '\n');

  cout << "Introduzca porcentaje de descuento ....: ";
  cin >> pd;
  cin.ignore(80, '\n');

  sb = ht * vh;
  td = (pd / 100) * sb;
  sl = sb - td;

  cout << "\n";

  cout << "Salario Bruto .................: " << sb << endl;
  cout << "Descuento (Seguridad Social) ..: " << td << endl;
  cout << "Salario Neto ..................: " << sl << endl;

  cout << endl;
  cout << "Presiona <Enter> para finalizar... ";
  cin.get();
  return 0;
}

