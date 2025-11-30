// C08EX04.CPP

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

class Sala {
  protected:
    int32_t sala;

  public:
    void PonerSala(int32_t sala) {
      this->sala = sala;
    }

    int32_t ObtenerSala() const {
      return sala;
    }
};

class Alumno : public Sala {
  private:
    string nombre;
    vector<float> nota;
    float media;

  public:
    Alumno() : nota(4) {}
    void PonerNombre(string nombre);
    string ObtenerNombre(void) const;
    void PonerNota(char NT[6], int32_t pos);
    float ObtenerNota(int32_t pos) const;
    void CalcularMedia(void);
    float ObtenerMedia(void) const;
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

void Alumno::CalcularMedia(void) {
  media = 0;
  for (float n : nota)
    media += n;
  media /= nota.size();
}

float Alumno::ObtenerMedia(void) const {
  return media;
}

int main(void) {
  cout << setprecision(2) << fixed;

  Alumno alumno;
  string nombre;
  char entranota[6];
  char entradasala[6];

  cout << "Registro de alumno" << endl;
  cout << endl;

  cout << "Ingrese el nombre.....: ";
  getline(cin, nombre);
  alumno.PonerNombre(nombre);

  cout << "Ingrese la sala.......: ";
  cin.getline(entradasala, sizeof(entradasala));
  alumno.PonerSala(atoi(entradasala));
  cout << endl;

  cout << "Ingrese las notas:" << endl;
  cout << endl;
  for (size_t i = 0; i <= 3; ++i) {
    cout << i + 1 << "a. nota...........: ";
    cin.getline(entranota, sizeof(entranota));
    alumno.PonerNota(entranota, i);
  }
  cout << endl;

  alumno.CalcularMedia();

  cout << endl;
  cout << "Reporte" << endl;
  cout << endl;
  cout << "Nombre........: " << alumno.ObtenerNombre() << endl;
  cout << "Sala..........: " << alumno.ObtenerSala() << endl;
  cout << endl;
  for (size_t i = 0; i <= 3; ++i) {
    cout << i + 1 << "a. nota......: ";
    cout << setw(5) << alumno.ObtenerNota(i) << endl;
  }
  cout << endl;

  cout << "Media........: " << setw(5) << alumno.ObtenerMedia();
  cout << endl;

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
