/*********************************************/
/* Programa: Area_de_un_triangulo            */
/*                                           */
/* Descripcion: Recibe por teclado la base y */
/* altura de un triangulo, mostrando su area */
/* por pantalla.                             */
/*                                           */
/* Autor: Denis Cabeza V.                    */
/*                                           */
/* Fecha: 03 Noviembre 2018                  */
/* Esmeraldas - Ecuador                      */
/* https://deniscabezav.github.io/C-plusplus */
/*********************************************/

#include <iostream>
using namespace std;

int ftriangulo(int base, int altura);

main(){
	int b,h;
	cout<<"\tAREA DE UN TRIANGULO\n\n";
    cout<<"Ingrese la base: ";
    	cin>>b;
    cout<<"Ingrese la altura: ";
   		cin>>h;
    cout<<"EL RESULTADO ES: ";
    	cout<<ftriangulo(b,h);
    cout<<endl;
    system("pause");
}

int ftriangulo(int base, int altura){
    return base*altura;
}
