#include <iostream>
#include "Tipos.h"
using namespace std;
int main() {
int zona, x;char claro;float y;
cout<< "¿usted es cliente claro ? ";
cout<< " s = si o n= no  ";
cin>> claro;
do{
cout<< "ingrese numero de zona: ";
cin>> zona;
} while (zona > 4); 
if (zona == 1){
  x=212;
  cout<< " Zona Super Vip \n ";}
   else {
     if (zona == 2) {
      x= 170;
      cout<<" Zona Vip \n"; }
      else {
         if (zona == 3) {
          x= 136;
          cout<<"Zona Preferencial \n ";}
          else {
            x=59;
           cout<<"Zona General \n   ";
          }
     }
  }   
if (claro == 's')
{  y = x* 0.20 ;
   y = x - y; 
   cout<< "precio a pagar es  "<< y;
}
else 
{
  cout<< "precio a pagar es  "<< x;
}
}
