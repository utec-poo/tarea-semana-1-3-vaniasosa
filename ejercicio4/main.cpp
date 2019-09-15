#include <iostream>
#include "Tipos.h"
using namespace std;
int main() {
int numero ; char crt; 
cout << "Ingrese el caracter: ";
cin >> crt;
cout << "Ingrese numero: ";
cin >> numero; 
if((crt=='a')or (crt=='c')or (crt=='e')or (crt=='g') )
  if(numero%2 == 0)
   {cout<< "El color es blanco";}
  else
   {cout << "el color es negro"; }
else  
  if (numero%2==0)
  {cout<< "el color es negro";}
   else
  { cout<< "El color es blanco";}
 return 0;
}
