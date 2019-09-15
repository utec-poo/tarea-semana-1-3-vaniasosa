#include <iostream>
#include "Tipos.h"
using namespace std;
int main() {
int numero,residuo;
do{
cout << "ingrese un numero:";
cin >> numero;
} while ((numero<100) or (numero>1000)); 
for (int i=0; residuo!= 0; i++)
 {
  residuo= numero/1;
   if (residuo%2==0)
   {cout<< "La ultima cifra es par \n";}
   else 
    {cout<< "La ultima cifra es impar \n";}
  residuo= numero/10;
  if (residuo%2==0)
   {cout<< "La segunda cifra es par \n";}
   else 
    {cout<< "La segunda cifra es impar \n";}
  residuo= numero/100;
  if (residuo%2==0)
   {cout<< "La primera cifra es par \n";}
   else 
    {cout<< "La primera cifra es impar \n";}
  residuo = numero/1000;  
 }
} 

