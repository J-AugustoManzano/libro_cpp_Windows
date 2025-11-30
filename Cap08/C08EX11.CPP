// C08EX11.CPP

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <limits>

using namespace std;

class Alumno {
  private:
    string nombre;
    vector<float> notas;
    float promedia;

  public:
    Alumno(int32_t numNotas) : notas(numNotas) {}

    void ponerNombre(const string &nombre) {
      this->nombre = nombre;
    }

    string obtenerNombre() const {
      return nombre;
    }

    void ponerNota(float nota, int32_t pos) {
      if (pos >= 0 and static_cast<size_t>(pos) < 
        notas.size()) {
        notas[static_cast<size_t>(pos)] = nota;
      }
    }

    float obtenerNota(int32_t pos) const {
      if (pos >= 0 and static_cast<size_t>(pos) < 
        notas.size()) {
        return notas[static_cast<size_t>(pos)];
      }
      return 0;
    }

    void calcularPromedia() {
      float suma = 0;
      for (float nota : notas) {
        suma += nota;
      }
      promedia = suma / notas.size();
    }

    float obtenerPromedia() const {
      return promedia;
    }
};

int main(void) {
  int32_t numAlumnos, numNotas = 4;
  float promedia_gp = 0;
  string nombre;
  vector<Alumno> alumnos;

  cout << setprecision(2) << fixed;

  cout << "¿Cuantos alumnos?: ";
  cin >> numAlumnos;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  alumnos.reserve(static_cast<size_t>(numAlumnos));

  for (int32_t i = 0; i < numAlumnos; ++i) {
    cout << endl;
    cout << "Registro del alumno " << i + 1 << endl;
    cout << endl;
    cout << "Ingrese el nombre.....: ";
    getline(cin, nombre);

    Alumno alumno(numNotas);
    alumno.ponerNombre(nombre);

    cout << endl;
    cout << "Ingrese las notas:" << endl;
    cout << endl;
    for (int32_t j = 0; j < numNotas; ++j) {
      float nota;
      cout << j + 1 << "a. nota..........: ";
      cin >> nota;
      alumno.ponerNota(nota, j);
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    alumno.calcularPromedia();
    alumnos.push_back(alumno);
  }

  cout << endl;
  cout << "Reporte General" << endl;
  cout << endl;
  cout << setiosflags(ios::left);
  cout << setw(41) << "Alumno";
  cout << resetiosflags(ios::left);

  cout << setiosflags(ios::right);
  for (int32_t j = 0; j < numNotas; ++j)
    cout << setw(7) << "Nota" << j + 1;
  cout << setw(8) << "Promedia";
  cout << endl << endl;

  for (const auto &alumno : alumnos) {
    cout << resetiosflags(ios::right);
    cout << setiosflags(ios::left);
    cout << setw(41) << alumno.obtenerNombre();
    cout << resetiosflags(ios::left);
    cout << setiosflags(ios::right);
    for (int32_t j = 0; j < numNotas; ++j)
      cout << setw(8) << alumno.obtenerNota(j);
    cout << setw(8) << alumno.obtenerPromedia();
    cout << endl;
    promedia_gp += alumno.obtenerPromedia();
  }

  promedia_gp /= numAlumnos;

  cout << endl;
  cout << setw(74) << "Promedia General = ";
  cout << setw(7) << promedia_gp;
  cout << endl << endl;

  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}

