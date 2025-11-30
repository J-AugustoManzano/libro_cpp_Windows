// C04EX07.CPP

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{

  for (uint16_t i = 10; i >= 1; --i)
    cout << "i = " << setw(2) << i << endl;

  cout << endl;

  cout << "Presione <Enter> para finalizar... ";
  cin.get();
  return 0;
}
