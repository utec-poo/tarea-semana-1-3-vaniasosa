#include <iostream>
#include "Tipos.h"
using namespace std;
int main() {
int numero;
do{
cout << "ingrese un numero:";
cin >> numero;
} while ((numero<10) or (numero>30)); 
for (int i=1; i<= numero ; i++)
 {
   {cout<< "*";} 
 }
return 0;
} 
