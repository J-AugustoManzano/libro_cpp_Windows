// C08EX06.CPP

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

class Grado {
  private:
    char curso;

  public:
    void PonerCurso(char curso) {
      this->curso = curso;
    }

    char ObtenerCurso() const {
      return curso;
    }

    Grado(void) {
      cout << "Constructor: Inicia clase Grado" << endl;
    }
    ~Grado(void) {
      cout << "Destructor: Libera clase Grado";
      cout << endl;
    }
};

class Aula {
  protected:
    int32_t aula;

  public:
    void PonerAula(int32_t aula) {
      this->aula = aula;
    }

    int32_t ObtenerAula() const {
      return aula;
    }

    Aula(void) {
      cout << "Constructor: Inicia clase Aula" << endl;
    }
    ~Aula(void) {
      cout << "Destructor: Libera clase Aula";
      cout << endl;
    }
};

class Alumno : public Aula, public Grado {
  private:
    string nombre;
    vector<float> nota;
    float promedio;

  public:
    Alumno() : nota(4) {
      cout << "Constructor: Inicia clase Alumno\n" << endl;
    }

    ~Alumno() {
      cout << "\nDestructor: Libera clase Alumno" << endl;
    }

    void PonerNombre(string nombre);
    string ObtenerNombre(void) const;
    void PonerNota(char NT[6], int32_t pos);
    float ObtenerNota(int32_t pos) const;
    void CalcularPromedio(void);
    float ObtenerPromedio(void) const;
};

void Alumno::PonerNombre(string nombre) {
  this->nombre = nombre;
}

string Alumno::ObtenerNombre(void) const {
  return nombre;
}

void Alumno::PonerNota(char NT[6], int32_t pos) {
  nota[pos] = atof(NT);
}

float Alumno::ObtenerNota(int32_t pos) const {
  return nota[pos];
}

void Alumno::CalcularPromedio(void) {
  promedio = 0;
  for (float n : nota)
    promedio += n;
  promedio /= nota.size();
}

float Alumno::ObtenerPromedio(void) const {
  return promedio;
}

int main(void) {
  cout << setprecision(2) << fixed;

  Alumno alumno;
  string nombre;
  char entranota[6];
  char entraaula[6];
  char cursoEscolar;

  cout << "Registro de alumno" << endl;
  cout << endl;

  cout << "Ingrese el nombre.....: ";
  getline(cin, nombre);
  alumno.PonerNombre(nombre);

  cout << "Ingrese el aula.......: ";
  cin.getline(entraaula, sizeof(entraaula));
  alumno.PonerAula(atoi(entraaula));
  
  cout << "Ingrese el curso......: ";
  cin >> cursoEscolar;
  alumno.PonerCurso(cursoEscolar);
  cin.ignore();
  cout << endl;

  cout << "Ingrese las notas:" << endl;
  cout << endl;
  for (size_t i = 0; i <= 3; ++i) {
    cout << i + 1 << "a. nota...........: ";
    cin.getline(entranota, sizeof(entranota));
    alumno.PonerNota(entranota, i);
  }
  cout << endl;

  alumno.CalcularPromedio();

  cout << endl;
  cout << "Reporte" << endl;
  cout << endl;
  cout << "Nombre........: " << alumno.ObtenerNombre() << endl;
  cout << "Aula..........: " << alumno.ObtenerAula() << endl;
  cout << "Curso.........: " << alumno.ObtenerCurso() << endl;
  cout << endl;
  for (size_t i = 0; i <= 3; ++i) {
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
