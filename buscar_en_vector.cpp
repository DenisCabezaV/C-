/*********************************************/
/* Programa: Busqueda_en_un_vector           */
/*                                           */
/* Descripcion: Recibe por teclado n numeros */
/* siendo almacenados en un vector.          */
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
	int x, limite, buscar, cont=0;
	int vec[limite];
	
	cout<<"\n\tINGRESE EL LIMITE DEL VECTOR\n";
		cin>>limite;
	
		for(x=0;x<limite;x++){
		    system("cls");
		    cout<<"INGRESE UN NUMERO EN EL ESPACIO "<<x+1<<" del vector\n";
		    cin>>vec[x];              
		}
	system("cls");
	
	cout<<"\n\tINGRESE EL NUMERO A BUSCAR\n";
		cin>>buscar;
	
		for(x=0;x<limite;x++){
		    system("cls");
		        if(buscar == vec[x]){
		            cout<<"El numero se encuentra en el espacio "<<x+1<<" del vector \n";
		            cont=1;
		        }            
		}
		
		if(cont == 0){
			cout<<"Elelemento no encontrado \n";
		}

	cout<<endl;
	system("pause");
}
