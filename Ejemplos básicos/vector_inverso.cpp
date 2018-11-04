/*********************************************/
/* Programa: Vector_inverso                  */
/*                                           */
/* Descripcion: Recibe un vector de n        */
/* elementos y devuelve el mismo vector y el */
/* vector inverso                            */
/*                                           */
/* Autor: Denis Cabeza V.                    */
/*                                           */
/* Fecha: 03 Noviembre 2018                  */
/* Esmeraldas - Ecuador                      */
/* https://deniscabezav.github.io/C-plusplus */
/*********************************************/

#include <iostream>
using namespace std;

int main(){
	int limite,c=0;
	cout<<"\n\n\tINGRESE EL LIMITE DEL VECTOR\n";
		cin>>limite;
	c=limite-1;
	int vec[limite], aux[limite], x;

	
	for(x=0;x<limite;x++){
		system("cls");
	    cout<<" INGRESE UN NUMERO EN EL ESPACIO "<<x+1<<" DEL VECTOR\n" ;
	    	cin>>vec[x];
	    aux[c] = vec[x]; 
		c--;              
	}
	system("cls");
	cout<<"\n\tVECTOR NORMAL          VECTOR INVERSO\n";
	
	for(x=0;x<limite;x++){
	    cout<<"\n\t     "<<vec[x]<<"\t\t\t     "<<aux[x];        
	}
	
	cout<<endl;
	system("pause");
}
