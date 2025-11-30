// C06EX01.CPP

#include <iostream>

using namespace std;

int main(void)
{

  int16_t edad = 25;
  int16_t *pedad = nullptr;

  pedad = &edad;

  cout << "La edad " << edad << " esta almacenada" << endl;
  cout << "en la direccion de memoria " << pedad << endl;

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
