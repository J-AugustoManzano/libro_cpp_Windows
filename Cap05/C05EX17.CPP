// C05EX17.CPP

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

  suma::resultado = 5 + 3;
  std::cout << suma::resultado << std::endl;

  cociente::resultado = 5.0 / 3.0;
  std::cout << cociente::resultado << std::endl;

  producto::resultado = 5 * 3;
  std::cout << producto::resultado << std::endl;

  diferencia::resultado = 5 - 3;
  std::cout << diferencia::resultado << std::endl;

  std::cout << std::endl;
  std::cout << "Tecle <Enter> para cerrar... ";
  std::cin.get();
  return 0;
}
