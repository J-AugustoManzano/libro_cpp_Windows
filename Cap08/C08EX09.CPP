// C08EX09.CPP

#include <iostream>

using namespace std;

class Empleado
{
  protected:
    string nombre;
    double salario;

  public:
    Empleado(const string &nombre, double salario)
      : nombre(nombre), salario(salario) {}

    virtual void calcularSalario(void)
    {
      cout << "Salario de " << nombre;
      cout << ": $" << salario << endl;
    }

    virtual ~Empleado() {}
};

class Gerente : public Empleado
{
  private:
    double bonificacion;

  public:
    Gerente(const string &nombre, double salario, double bonificacion)
      : Empleado(nombre, salario), bonificacion(bonificacion) {}

    void calcularSalario(void) override
    {
      double salarioTotal = salario + bonificacion;
      cout << "Salario de " << nombre;
      cout << " (Gerente): $" << salarioTotal << endl;
    }
};

int main(void)
{
  // Creando objetos directos
  Empleado emp1("Alicia", 4000.0);
  Gerente emp2("Roberto", 6000.0, 2000.0);

  // Usando referencias para mantener el polimorfismo
  Empleado &ref1 = emp1;
  Empleado &ref2 = emp2;

  ref1.calcularSalario(); // Llama a la versión de la clase base
  ref2.calcularSalario(); // Llama a la versión de la clase derivada

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
