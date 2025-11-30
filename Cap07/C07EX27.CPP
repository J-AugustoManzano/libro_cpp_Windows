// C07EX27.CPP

#include <iostream>

using namespace std;

#define producto1(x, y) ((x) * (y))
#define producto2(x, y) (x * y)

int main(void)
{
  cout << "(2 + 3) x 4 = " << producto1(2 + 3, 4) << endl;
  cout << "(2 + 3) x 4 = " << producto2(2 + 3, 4) << endl;

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
