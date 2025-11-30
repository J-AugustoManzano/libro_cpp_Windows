// C05EX20.CPP

#include <iostream>

using namespace std;

int16_t VALOR = 3;

namespace alcance1
{
  int16_t VALOR = 2;
  namespace alcance2
  {
    int16_t VALOR = 1;
  }
}

int main(void)
{

  int16_t VALOR = 4;

  cout << VALOR << endl;
  cout << ::VALOR << endl;
  cout << alcance1::VALOR << endl;
  cout << alcance1::alcance2::VALOR << endl;

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
