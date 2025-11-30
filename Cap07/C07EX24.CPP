// C07EX24.CPP

#include <iostream>
#include <string>

using namespace std;

using IDProducto = int32_t;
using NombreProducto = string;
using PrecioProducto = float;

struct Producto
{
  IDProducto id;
  NombreProducto nombre;
  PrecioProducto precio;
};

int main(void)
{

  Producto p1;
  p1.id = 101;
  p1.nombre = "Camiseta";
  p1.precio = 29.99;

  cout << "Informacion del Producto:\n" << endl;
  cout << "ID ........: " << p1.id << endl;
  cout << "Nombre ....: " << p1.nombre << endl;
  cout << "Precio $ ..: " << p1.precio << endl;

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
