// C07EX16.CPP

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm> // para "std::sort"

using namespace std;

struct RegistroAlumno {
  string nombre;
  array<float, 4> notas;
  float promedio;
};

// Funcion de comparacion
bool cmpNombre(const RegistroAlumno &a, const RegistroAlumno &b) 
{
  return a.nombre < b.nombre;
}

int main(void)
{
  vector<RegistroAlumno> alumnos(8);
  RegistroAlumno x;
  float suma_nt, suma_pr, promedio_gp;

  cout << setprecision(2) << fixed;

  cout << "Registro de alumnos" << endl << endl;

  for (int i = 0; i <= 7; ++i) {
    cout << "Ingrese " << setw(2) << i + 1 << "o nombre: ";
    getline(cin, alumnos[i].nombre);
    cout << endl;
    cout << "Ingrese las notas:" << endl << endl;
    for (int j = 0; j <= 3; ++j) {
      cout << setw(2) << j + 1 << "a nota: ";
      string entranota;
      getline(cin, entranota);
      alumnos[i].notas[j] = atof(entranota.c_str());
    }
    cout << endl;
  }

  suma_pr = 0;
  for (size_t i = 0; i <= 7; ++i) {
    suma_nt = 0;
    for (size_t j = 0; j <= 3; ++j)
      suma_nt += alumnos[i].notas[j];
    alumnos[i].promedio = suma_nt / 4;
    suma_pr += alumnos[i].promedio;
  }
  promedio_gp = suma_pr / 8;

  // Ordena alumnos
  sort(alumnos.begin(), alumnos.end(), cmpNombre);

  cout << endl << "Reporte General" << endl << endl;
  cout << left << setw(41) << "Alumno";
  cout << right << setw(7) << "Nota1";
  cout << setw(7) << "Nota2";
  cout << setw(7) << "Nota3";
  cout << setw(7) << "Nota4";
  cout << setw(7) << "Promedio" << endl << endl;

  for (size_t i = 0; i <= 7; ++i) {
    cout << left << setw(41) << alumnos[i].nombre;
    cout << right;
    for (size_t j = 0; j <= 3; ++j)
      cout << setw(7) << alumnos[i].notas[j];
    cout << setw(7) << alumnos[i].promedio << endl;
  }

  cout << endl;
  cout << setw(70) << "Promedio General = ";
  cout << setw(6) << promedio_gp << endl << endl;

  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
