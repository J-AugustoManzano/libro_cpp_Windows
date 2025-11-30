// CALENDAR.H
// Encabezado para control de calendario

#include <iostream>
#include <string>
#include <cmath>
#include <vector>

template <typename NuevoTipo, typename TipoAntiguo>
NuevoTipo convierte(TipoAntiguo base)
{
  return static_cast<NuevoTipo>(base);
}

// Funcionalidades operacionales
bool fechaValidaFormato(const std::string &fecha)
{
  if (fecha.length() != 10)
    return false;

  if (fecha[2] != '/' or fecha[5] != '/')
    return false;

  for (size_t i = 0; i <= 9; i++) {
    if (i == 2 or i == 5)
      continue;
    if (not std::isdigit(fecha[i]))
      return false;
  }

  return true;
}

uint16_t obtenerDia(std::string fecha)
{
  return std::stoi(fecha.substr(0, 2));
}

uint16_t obtenerMes(std::string fecha)
{
  return std::stoi(fecha.substr(3, 2));
}

uint16_t obtenerAno(std::string fecha)
{
  return std::stoi(fecha.substr(6, 4));
}

bool esBisiesto(std::string fecha)
{
  uint16_t ano {obtenerAno(fecha)};

  return
  (
    (ano % 400 == 0) or
    (ano % 4 == 0 and ano % 100 != 0)
  );
}

uint16_t ultimoDiaDelMes(std::string fecha)
{
  uint16_t mes {obtenerMes(fecha)};

  if (mes == 2)
    return (esBisiesto(fecha)) ? 29 : 28;

  if (mes == 4 or mes == 6 or mes == 9 or mes == 11)
    return 30;

  return 31;
}

bool validaFecha(std::string fecha)
{
  uint16_t dia {obtenerDia(fecha)};
  uint16_t mes {obtenerMes(fecha)};
  uint16_t ano {obtenerAno(fecha)};

  return (ano >=    1) and
         (ano <= 9999) and
         (mes >=    1) and
         (mes <=   12) and
         (dia >=    1) and
         (dia <= ultimoDiaDelMes(fecha)) and
         not ((ano == 1582) and
              (mes ==   10) and
              (dia >=    5) and
              (dia <=   14));
}

uint64_t fechaANSI(std::string fecha)
{
  std::string fec;
  fec.reserve(11);

  for (char caractere : fecha)
    if (std::isdigit(caractere))
      fec.push_back(caractere);

  fec = fec.substr(4, 4) +
         fec.substr(2, 2) +
         fec.substr(0, 2);

  return std::stoul(fec);
}

uint64_t fechaAJuliano(std::string fecha)
{
  float a, b, c, d, e;
  uint64_t j;

  uint16_t dia {obtenerDia(fecha)};
  uint16_t mes {obtenerMes(fecha)};
  uint16_t ano {obtenerAno(fecha)};
  uint64_t fec {fechaANSI(fecha)};

  if (mes < 3)
    {
      ano = ano - 1;
      mes = mes + 12;
    }

  if (fec >= 15821015) // 15/10/1582
    {
      a = convierte<uint64_t>(ano / 100);
      b = convierte<uint64_t>(a / 4);
      c = 2 - a + b;
    }
  if (fec <= 15821004) // 04/10/1582
    c = 0;

  d = convierte<uint64_t>(365.25 * (ano + 4716));
  e = convierte<uint64_t>(30.6001 * (mes + 1));
  j = convierte<uint64_t>(d + e + dia + 0.5 + c - 1524.5);

  return j;
}

std::string julianoAFecha(uint64_t dj)
{
  char buffer[11];
  float a, d, e, f, g, h, i, j, k, l, m;

  a = convierte<float>(dj);

  if (a < convierte<float>(2299161))
    d = a;

  if (a > convierte<float>(2299160))
    {
      e = convierte<uint64_t>((a - 1867216.25) / 36524.25);
      d = a + 1 + e - convierte<uint64_t>(e / 4);
    }

  f = d + 1524;
  g = convierte<uint64_t>((f - 122.1) / 365.25);
  h = convierte<uint64_t>(g * 365.25);
  i = convierte<uint64_t>((f - h) / 30.6001);
  j = f - h - convierte<uint64_t>(i * 30.6001);

  if (i < 14)
    k = i - 1;

  if (i > 13)
    k = i - 13;

  if (k > 2)
    l = g - 4716;

  if (k < 3)
    l = g - 4715;

  if (l > 0)
    m = l;

  if (l < 1)
    m = l * (-1) + 1;

  snprintf(buffer, 11, "%02.f/%02.f/%04.f", j, k, m);

  return std::string(buffer);
}

uint16_t diaDeLaSemana(std::string fecha)
{
  return convierte<uint16_t>((fechaAJuliano(fecha) + 2) % 7);
}

std::string diaDeLaSemanaPorExtenso(std::string fecha, 
                                    std::string idioma)
{
  uint16_t ds = diaDeLaSemana(fecha) - 1;
  std::string diaSemana;

  std::string diasSemanaPt[] = {
    "Domingo",
    "Segunda-feira",
    "Terca-feira",
    "Quarta-feira",
    "Quinta-feira",
    "Sexta-feira",
    "Sabado"
  };

  std::string diasSemanaEs[] = {
    "Domingo",
    "Lunes",
    "Martes",
    "Miércoles",
    "Jueves",
    "Viernes",
    "Sábado"
  };

  std::string diasSemanaEn[] = {
    "Sunday",
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday"
  };

  if (ds < 0 or ds > 6)
    return "Fecha invalida";
  if (idioma == "pt")
    return diasSemanaPt[ds];
  if (idioma == "es")
    return diasSemanaEs[ds];
  if (idioma == "en")
    return diasSemanaEn[ds];

  return "Idioma no soportado";
}
