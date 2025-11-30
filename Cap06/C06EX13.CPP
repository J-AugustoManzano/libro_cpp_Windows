// C06EX13.CPP

#include <iostream>

using namespace std;

int main(void)
{

  const int32_t x = 10;

  const int32_t *px = &x;

  // Intento de modificar el valor de la constante
  // resulta en un error de compilación
  // *px = 20; // ¡Error!

  cout << "Valor de la constante x ...: " << x << endl;
  cout << "Valor apuntado por px .....: " << *px << endl;

  int32_t y = 5;

  int32_t *const py = &y;

  *py = 15;

  cout << "Valor de la variable y ....: " << y << endl;
  cout << "Valor apuntado por py .....: " << *py << endl;

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
