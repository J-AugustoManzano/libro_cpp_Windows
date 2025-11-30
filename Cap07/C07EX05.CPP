// C07EX05.CPP

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{

  float nota[10][4];
  size_t i, j;

  cout << "Lectura de las notas" << endl;

  cout << setprecision(2) << fixed;

  // Entrada de las notas
  for (i = 0; i <= 9; ++i) {
    cout << endl;
    cout << "Ingrese las notas del " << setw(2);
    cout << i + 1 << "o alumno:" << endl << endl;
    for (j = 0; j <= 3; ++j) {
      cout << "Nota: " << j + 1 << " = ";
      cin >> nota[i][j];
      cin.ignore(80, '\n');
      }
  }

  // Presentacion de las notas
  cout << endl;
  cout << "Presentacion de las notas" << endl;
  cout << endl;
  cout << setw(6) << "Alumno";
  cout << setw(9) << "Nota1";
  cout << setw(9) << "Nota2";
  cout << setw(9) << "Nota3";
  cout << setw(9) << "Nota4";
  cout << endl << endl;
  for (i = 0; i <= 9; i++) {
    cout << setw(6) << i + 1;
    for (j = 0; j <= 3; j++)
      cout << setw(9) << nota[i][j];
    cout << endl;
  }

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
