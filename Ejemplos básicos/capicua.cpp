/*********************************************/
/* Programa: Suma_vector_inverso             */
/*                                           */
/* Descripcion: Recibe 1 numero y verifica   */
/* si es capicua o no.                       */
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
	int num,a,b,c;
	cout<<"ingrese numero: ";
		cin>>num;
	c=num/100;
	b=num%100;
	a=b%10;
	
	
	if(c==a)
		cout<<"\n\nEs capicua";
	else
		cout<<"\n\nNo es capicua";
		
	fflush(stdin);
	cin.get();      
}
