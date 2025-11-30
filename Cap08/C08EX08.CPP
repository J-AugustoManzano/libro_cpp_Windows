// C08EX08.CPP

#include <iostream>
#include <string>

using namespace std;

class Persona
{
  protected:
    string nombre;
    int32_t edad;

  public:
    Persona() : nombre(""), edad(0) {}

    void ingresar(const string &n, int32_t e)
    {
      nombre = n;
      edad = e;
    }

    void mostrar(void) const
    {
      cout << "Nombre ..............: " << nombre << endl;
      cout << "Edad ................: " << edad << endl;
    }
};

class Alumno : public Persona
{
  private:
    string actividad;

  public:
    Alumno() : Persona(), actividad("") {}

    void ingresar(const string &n, int32_t e, const string &a)
    {
      Persona::ingresar(n, e);
      actividad = a;
    }

    void mostrar(void) const
    {
      Persona::mostrar();
      cout << "Act. Deportiva ......: " << actividad << endl;
    }
};

int main(void)
{

  Alumno alumno;
  string nombre, actividad;
  int32_t edad;

  cout << "Registro de Alumno en el Gimnasio" << endl;
  cout << endl;

  cout << "Nombre ..............: ";
  getline(cin, nombre);
  cout << "Edad ................: ";
  cin >> edad;
  cin.ignore(80, '\n');
  cout << "Act. Deportiva ......: ";
  getline(cin, actividad);

  alumno.ingresar(nombre, edad, actividad);

  cout << endl;
  cout << "Datos del Alumno Registrado:" << endl;
  cout << endl;

  alumno.mostrar();

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
