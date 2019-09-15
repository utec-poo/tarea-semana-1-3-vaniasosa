#include <iostream>
#include "Tipos.h"
using namespace std;
int main() {
int numero,x;
do{
cout << "ingrese un numero:";
cin >> numero;
} while ((numero<100) or (numero>1000)); 
for (int i=0; x!= 0; i++)
 {
  x= numero/1;
   if (x%2==0)
   {cout<< "La ultima cifra es par \n";}
   else 
    {cout<< "La ultima cifra es impar \n";}
  x= numero/10;
  if (x%2==0)
   {cout<< "La segunda cifra es par \n";}
   else 
    {cout<< "La segunda cifra es impar \n";}
  x= numero/100;
  if (x%2==0)
   {cout<< "La primera cifra es par \n";}
   else 
    {cout<< "La primera cifra es impar \n";}
  x= numero/1000;  
 }
} 
