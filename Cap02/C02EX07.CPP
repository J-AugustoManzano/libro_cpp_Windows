// C02EX07.CPP

#include <iostream>
#include <iomanip>

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

  cout << setprecision(2) << fixed << right;

  cout << "Salario Bruto ....: " << setw(8) << sb << endl;
  cout << "Descuento (SS) ...: " << setw(8) << td << endl;
  cout << "Salario Neto .....: " << setw(8) << sl << endl;

  cout << endl;
  cout << "Presiona <Enter> para finalizar... ";
  cin.get();
  return 0;
} 
