 // C05EX10.CPP
 // Programa Calculadora

 #include <iostream>
 #include <iomanip>
 #include "ecra.h"

 using namespace std;

 float r, a, b;

 void pausa(void)
 {
   cout << "Pulse <Enter> para finalizar... ";
   cin.get();
 }

 void entrada(void)
 {
   position( 5, 1);
   cout << "Ingrese un valor - variable [A]: ";
   cin >> a;
   cin.ignore(80, '\n');
   position( 6, 1);
   cout << "Ingrese un valor - variable [B]: ";
   cin >> b;
   cin.ignore(80, '\n');
 }

 float calculo(float a, float b, char operador)
 {
   switch (operador)
   {
     case '+': return a + b;
     case '-': return a - b;
     case '*': return a * b;
     case '/': return a / b;
     default: return 0.0;
   }
 }

 void salida(void)
 {
   position( 9, 1);
   cout << "El resultado entre A y B = " << setw(8) << r;
   cout << endl;
   position(11, 1);
   pausa();
 }

 void rotadicion(void)
 {
   clear();
   position( 1, 1); cout << "Rutina de Adicion";
   position( 2, 1); cout << "-----------------";
   entrada();
   r = calculo(a, b, '+');
   salida();
 }

 void rotresta(void)
 {
   clear();
   position( 1, 1); cout << "Rutina de Resta";
   position( 2, 1); cout << "---------------";
   entrada();
   r = calculo(a, b, '-');
   salida();
 }

 void rotmultiplicacion(void)
 {
   clear();
   position( 1, 1); cout << "Rutina de Multiplicacion";
   position( 2, 1); cout << "------------------------";
   entrada();
   r = calculo(a, b, '*');
   salida();
 }

 void rotdivision(void)
 {
   clear();
   position( 1, 1); cout << "Rutina de Division";
   position( 2, 1); cout << "------------------";
   entrada();
   if (b == 0)
     {
       position( 9, 1); cout << "Error de division";
       position(11, 1); pausa();
     }
   else
     {
       r = calculo(a, b, '/');
       salida();
     }
 }

 int main(void)
 {
   int16_t opcion = 0;
   while (opcion != 5)
     {
       cout << setprecision(2);
       cout << setiosflags(ios::right);
       cout << setiosflags(ios::fixed);
       clear();
       position( 1, 1); cout << "--------------------";
       position( 2, 1); cout << "Programa Calculadora";
       position( 3, 1); cout << "   Menu Principal   ";
       position( 4, 1); cout << "--------------------";
       position( 6, 1); cout << "[1] - Adicion";
       position( 7, 1); cout << "[2] - Resta";
       position( 8, 1); cout << "[3] - Multiplicacion";
       position( 9, 1); cout << "[4] - Division";
       position(10, 1); cout << "[5] - Fin del Programa";
       position(12, 1); cout << "Elija una opcion: ";
       cin >> opcion;
       cin.ignore(80, '\n');
       if (opcion != 5)
         {
           switch (opcion)
             {
               case  1: rotadicion();         break;
               case  2: rotresta();           break;
               case  3: rotmultiplicacion();  break;
               case  4: rotdivision();        break;
             }
         }
     }
   return 0;
 }
