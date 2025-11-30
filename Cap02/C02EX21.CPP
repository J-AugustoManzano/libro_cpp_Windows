// C02EX21.CPP

#include <iostream>
#include <print>

using namespace std;

int main(void)
{
  println("Combinado .: {:*<+10.2f}, {:+#09X}", 3.14159, 10);
  println("Valores ...: {}, {}", 10'000., 100'000.);

  println("");
  print("Presione <Enter> para finalizar... ");
  cin.get();
  return 0;
}
