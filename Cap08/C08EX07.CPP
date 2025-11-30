// C08EX07.CPP

#include <iostream>
#include <string>

using namespace std;

class Alumno
{
  private:
    string nombre;
    int32_t edad;

  public:
    // Constructor
    Alumno(string nombre, int32_t edad) {
      this->nombre = nombre;
      this->edad = edad;
    }

    // Destructor
    ~Alumno() {}

    void Presentar() {
      cout << "Nombre: " << nombre;
      cout << " tiene " << edad << " años" << endl;
    }
};

int main(void)
{

  // Crear objeto "alumno1" y "alumno2"
  Alumno alumno1("Lorenzo", 20);
  Alumno alumno2("Luna", 19);

  // Presentar los detalles del alumno
  alumno1.Presentar();
  alumno2.Presentar();

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
