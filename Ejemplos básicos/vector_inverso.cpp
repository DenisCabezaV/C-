/*********************************************/
/* Programa: Vector_inverso                  */
/*                                           */
/* Descripcion: Recibe por 2 vectores de 5   */
/* elementos y devuelve un vector con la suma*/
/* cruzada de los 2 vectores anteriores.     */
/*                                           */
/* Autor: Denis Cabeza V.                    */
/*                                           */
/* Fecha: 03 Noviembre 2018                  */
/* Esmeraldas - Ecuador                      */
/* https://deniscabezav.github.io/C-plusplus */
/*********************************************/

#include <iostream>
using namespace std;

main(){
      float v[5],d[5],su[5];
      int i,s=0,x;
      for(i=0;i<=4;i++){
         cout<<"ingrese los elementos: ";cin>>v[i];
      }
      cout<<"\n";
      for(i=0;i<=4;i++){
         
         cout<<"ingrese los elementos: ";cin>>d[i];
      }
      cout<<"\n";
      x=4;
      for(i=0;i<=4;i++){
          su[i]=v[i]+d[x];
          x--;
          cout<<su[i]<<endl;
      }
fflush(stdin);
cin.get();
}
