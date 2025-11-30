// C02EX17.CPP

#include <iostream>
#include <print>

using namespace std;

int main(void)
{
  println("Numeros: {}, {} y {}", 1, 3, 2);
  println("Numeros: {0}, {2} y {1}", 1, 3, 2);

  println("");
  print("Presione <Enter> para finalizar... ");
  cin.get();
  return 0;
}
