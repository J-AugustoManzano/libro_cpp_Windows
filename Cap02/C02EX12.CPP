// C02EX12.CPP

#include <iostream>

using namespace std;

int main(void)
{
  int16_t x, y;

  x = 10; y = ++x;
  cout << "\nX = " << x << " | Y = " << y << endl;

  x = 10; y = x++;
  cout << "\nX = " << x << " | Y = " << y << endl;

  cout << endl;
  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
