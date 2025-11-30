// C05EX19.CPP

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

  {
    using namespace suma;
    resultado = 5 + 3;
    std::cout << resultado << std::endl;
  }

  {
    using namespace cociente;
    resultado = 5.0 / 3.0;
    std::cout << resultado << std::endl;
  }

  {
    using namespace producto;
    resultado = 5 * 3;
    std::cout << resultado << std::endl;
  }

  {
    using namespace diferencia;
    resultado = 5 - 3;
    std::cout << resultado << std::endl;
  }

  std::cout << std::endl;
  std::cout << "Teclee <Enter> para finalizar... ";
  std::cin.get();
  return 0;
}
