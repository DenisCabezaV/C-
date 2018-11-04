/*********************************************/
/* Programa: Suma_vectores                   */
/*                                           */
/* Descripcion: Recibe 2 vectores de n       */
/* elementos y devuelve un vector con la suma*/
/* de los 2 vectores anteriores.             */
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
	int limite;
    cout<<"INGRESE EL LIMITE DE LOS VECTORES:\t";
    cin>>limite;
    int vec1[limite],vec2[limite],vec3[limite], x;
      
    system("cls");
    
    for(x=0;x<limite;x++){
        system("cls");
        cout<<"INGRESE EL ELEMENTO "<<x+1<<" DEL VECTOR 1:\t";
            cin>>vec1[x];
    }
	
	for(x=0;x<limite;x++){
        system("cls");
        cout<<"INGRESE EL ELEMENTO "<<x+1<<" DEL VECTOR 2:\t";
    		cin>>vec2[x];
    }
	
	system("cls");
    cout<<"El resultado de la suma de los vectores es:\n";
    
    for(x=0;x<limite;x++){
        vec3[x]=vec1[x]+vec2[x];
        cout<<"\n\t"<<vec3[x];                       
	}
	
	system("pause");
}
