// C08EX02.CPP

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

class Alumno
{
  public:
    string nombre;
    vector<float> notas;
    float promedio;

    Alumno() : notas(4) {}
    float calcularPromedio(void)
    {
      float suma = 0.0f;
      for (float n : notas)
        suma += n;
      promedio = suma / notas.size();
      return promedio;
    }
};

int main(void)
{
  cout << setprecision(2) << fixed;

  char entradaNota[6];
  Alumno alumno;

  cout << "Registro de alumno" << endl;
  cout << endl;

  cout << "Ingrese el nombre del alumno: ";
  getline(cin, alumno.nombre);
  cout << endl;

  cout << "Ingrese las notas:" << endl;
  cout << endl;
  for (size_t i = 0; i < alumno.notas.size(); ++i)
  {
    cout << setw(2) << i + 1 << "a. nota: ";
    cin.getline(entradaNota, sizeof(entradaNota));
    alumno.notas[i] = atof(entradaNota);
  }
  cout << endl;

  alumno.calcularPromedio();

  cout << endl;
  cout << "Reporte del alumno" << endl;
  cout << endl;
  cout << "Nombre..........: " << alumno.nombre << endl;
  cout << endl;
  for (size_t i = 0; i < alumno.notas.size(); ++i)
  {
    cout << setw(2) << i + 1 << "a. nota......: ";
    cout << setw(5) << alumno.notas[i] << endl;
  }
  cout << endl;

  cout << "Promedio.......: " << setw(5) << alumno.promedio << endl;
  cout << endl;

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
