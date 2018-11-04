/*********************************************/
/* Programa: Suma_indice_impar               */
/*                                           */
/* Descripcion: Suma los elementos de indice */
/* impar almacenados en un vector.           */
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
	int limite,x,s=0;
	cout<<"\n\n\tINGRESE EL x DEL VECTOR\n";
	cout<<"\n";cin>>limite;
    int vec[limite];
    
	for(x=1;x<=limite;x++){
		system("cls");
        cout<<"INGRESE UN NUMERO EN EL ESPACIO  "<<x<<"  del vector\n";
            cin>>vec[x];
            
        if(x%2!=0){
            s=s+vec[x];
		}
    }
	
	cout<<"LA SUMATORIA DE LOS INDICES IMPARES ES: "<<s;
	cout<<endl;
	system("pause");
}
