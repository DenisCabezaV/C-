/*********************************************/
/* Programa: Vector_par                      */
/*                                           */
/* Descripcion: Recibe un vector de 10       */
/* elementos y devuelve en pantalla solo los */
/* numeros pares.                            */
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
	int z;
    int n[10];
	
	for(z=0;z<=9;z++){
		cout<<"      INGRESE LOS NUMEROS";
		cin>>n[z];
	}
	
	cout<<"\n   ***************************** \n";
	
	for(z=0;z<=9;z++){
		if(n[z]%2==0)
			cout<<"            "<<n[z]<<"\n";
	}
	
	fflush(stdin);
	cin.get();
}
