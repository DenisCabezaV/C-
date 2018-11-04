/*********************************************/
/* Programa: Dias_de_la_semana               */
/*                                           */
/* Descripcion: Recibe por teclado la inicial*/
/* del dia de la semana y devuelve por       */
/* pantalla el nombre del dia.               */
/*                                           */
/* Autor: Denis Cabeza V.                    */
/*                                           */
/* Fecha: 03 Noviembre 2018                  */
/* Esmeraldas - Ecuador                      */
/* https://deniscabezav.github.io/C-plusplus */
/*********************************************/

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;
main(){
      char op[1];
      cout<<"\nINGRESE LA INICIAL DEL DIA QUE DESEA\n";
      cout<<"NOTA: Recuerde que la X/x es para el dia MIERCOLES\n";
      gets(op);
      switch(op[1]){
                case (op[1]=='l' || op[1]=='L'):
                       system("cls");
                       system("color 0b");
                       cout<<"_____________________________________________________"<<"\n";
                       cout<<"EL DIA ES:  LUNES"; 
                       cout<<"_____________________________________________________"<<"\n";
                break;
                case (op[1]=='m' || op[1]=='M'):
                       system("cls");
                       system("color 0a");
                       cout<<"_____________________________________________________"<<"\n";
                       cout<<"EL DIA ES:  MARTES"; 
                       cout<<"_____________________________________________________"<<"\n";
                break;
                case (op[1]=='x' || op[1]=='X'):
                       system("cls");
                       system("color 04");
                       cout<<"_____________________________________________________"<<"\n";
                       cout<<"EL DIA ES:  MIERCOLES"; 
                       cout<<"_____________________________________________________"<<"\n";
                break;
                case (op[1]=='j' || op[1]=='J'):
                       system("cls");
                       system("color 04");
                       cout<<"_____________________________________________________"<<"\n";
                       cout<<"EL DIA ES:  JUEVES"; 
                       cout<<"_____________________________________________________"<<"\n";
                break;
                case (op[1]=='v' op[1]=='V'):
                       system("cls");
                       system("color 04");
                       cout<<"_____________________________________________________"<<"\n";
                       cout<<"EL DIA ES:  VIERNES"; 
                       cout<<"_____________________________________________________"<<"\n";
                break;
      }
      system("pause");
}
