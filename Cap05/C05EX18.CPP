// C05EX18.CPP

#include <iostream>

namespace suma
{
  int16_t resultado;
}

namespace cociente
{
  float resultado;
}

namespace producto
{
  int64_t resultado;
}

namespace diferencia
{
  double resultado;
}

int main(void)
{

  using namespace producto;

  resultado = 5 + 3;
  std::cout << resultado << std::endl;

  resultado = 5 / 3;
  std::cout << resultado << std::endl;

  resultado = 5 * 3;
  std::cout << resultado << std::endl;

  resultado = 5 - 3;
  std::cout << resultado << std::endl;

  std::cout << std::endl;
  std::cout << "tecle <enter> para encerrar... ";
  std::cin.get();
  return 0;
}
