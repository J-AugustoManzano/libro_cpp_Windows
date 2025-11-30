// C08EX03.CPP

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

class Alumno
{
private:
  string nombre;
  vector<float> notas;
  float promedio;

public:
  Alumno() : notas(4) {}
  void PonerNombre(string nombre);
  string ObtenerNombre(void) const;
  void PonerNota(char entrada[6], int32_t posicion);
  float ObtenerNota(int32_t posicion) const;
  void CalcularPromedio(void);
  float ObtenerPromedio(void) const;
};

void Alumno::PonerNombre(string nombre)
{
  this->nombre = nombre;
}

string Alumno::ObtenerNombre(void) const
{
  return nombre;
}

void Alumno::PonerNota(char entrada[6], int32_t posicion)
{
  notas[posicion] = atof(entrada);
}

float Alumno::ObtenerNota(int32_t posicion) const
{
  return notas[posicion];
}

void Alumno::CalcularPromedio(void)
{
  promedio = 0;
  for (float n : notas)
    promedio += n;
  promedio /= notas.size();
}

float Alumno::ObtenerPromedio(void) const
{
  return promedio;
}

int main(void)
{
  cout << setprecision(2) << fixed;

  Alumno alumno;
  string nombre;
  char entrada[6];

  cout << "Registro de alumno" << endl;
  cout << endl;

  cout << "Ingrese el nombre.....: ";
  getline(cin, nombre);
  alumno.PonerNombre(nombre);
  cout << endl;

  cout << "Ingrese las notas:" << endl;
  cout << endl;
  for (size_t i = 0; i <= 3; ++i)
  {
    cout << i + 1 << "a. nota...........: ";
    cin.getline(entrada, sizeof(entrada));
    alumno.PonerNota(entrada, i);
  }
  cout << endl;

  alumno.CalcularPromedio();

  cout << endl;
  cout << "Reporte" << endl;
  cout << endl;
  cout << "Nombre..........: " << alumno.ObtenerNombre() << endl;
  cout << endl;
  for (size_t i = 0; i <= 3; ++i)
  {
    cout << i + 1 << "a. nota......: ";
    cout << setw(5) << alumno.ObtenerNota(i) << endl;
  }
  cout << endl;

  cout << "Promedio......: " << setw(5) << alumno.ObtenerPromedio();
  cout << endl;

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
