/*********************************************/
/* Programa: Area_de_un_cuadrado             */
/*                                           */
/* Descripcion: Recibe por teclado la base   */
/* de un cuadrado, mostrando su area por     */
/* pantalla.                                 */
/*                                           */
/* Autor: Denis Cabeza V.                    */
/*                                           */
/* Fecha: 03 Noviembre 2018                  */
/* Esmeraldas - Ecuador                      */
/* https://deniscabezav.github.io/C-plusplus */
/*********************************************/

#include <iostream>
using namespace std;

int fcuadrado(int base);

main(){
	int b;
	cout<<"\tAREA DE UN CUADRADO\n\n";
    cout<<"Ingrese la base: ";
    	cin>>b;
    cout<<"EL RESULTADO ES: ";
    	cout<<fcuadrado(b)<<endl;
    system("pause");
}

int fcuadrado(int base){
	return base*base;
}

