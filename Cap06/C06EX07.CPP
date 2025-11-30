// C06EX07.CPP

#include <iostream>

using namespace std;

int main(void)
{
	
  int32_t edad = 25;
  int32_t *pedad = nullptr;

  pedad = &edad;

  cout << "Variable EDAD ....: " << edad << endl;
  cout << "Puntero PEDAD ....: " << pedad << endl;

  (*pedad)++;

  cout << "Variable EDAD ....: " << edad << endl;
  cout << "Puntero PEDAD ....: " << pedad << endl;

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
