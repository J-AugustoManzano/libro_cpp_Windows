// C06EX09.CPP

#include <iostream>

using namespace std;

int main(void)
{
	
  int32_t edad = 25;
  int32_t *pedad1 = nullptr, *pedad2 = nullptr;

  pedad1 = &edad;
  pedad2 = pedad1;

  cout << "Variable EDAD ....: " << edad << endl;
  cout << "Puntero PEDAD1 ...: " << pedad1 << endl;
  cout << "Puntero PEDAD2 ...: " << pedad2 << endl;

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
