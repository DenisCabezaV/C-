/*********************************************/
/* Programa: While                           */
/*                                           */
/* Descripcion: Se repite hasta que el       */
/* numero ingresado sea 0.                   */
/*                                           */
/* Autor: Denis Cabeza V.                    */
/*                                           */
/* Fecha: 03 Noviembre 2018                  */
/* Esmeraldas - Ecuador                      */
/* https://deniscabezav.github.io/C-plusplus */
/*********************************************/

#include<iostream>
using namespace std;
main(){
	int x,c=1;
	while(x!=0){
		cout<<"numero "<<c<<": ";
			cin>>x;
		c++;
	}
	fflush(stdin);
	cin.get();
}
