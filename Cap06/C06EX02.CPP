// C06EX02.CPP

#include <iostream>

using namespace std;

int main(void)
{

  int16_t edad = 25;
  int16_t *pedad = nullptr;

  pedad = &edad;

  cout << "EDAD  = " << edad << " | Dir: = " << &edad;
  cout << endl;
  cout << "PEDAD = " << *pedad << " | Dir: = " << &pedad;
  cout << endl;

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
