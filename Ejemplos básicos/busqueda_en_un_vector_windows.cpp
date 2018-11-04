/*********************************************/
/* Programa: Busqueda_en_un_vector_windows   */
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

#include<conio.h>
#include<iostream>
#include<windows.h>
using namespace std;

main()
{
	int c=1;
	do
	{
		system("cls");
		int i,n,nb,b=1;
		cout<<"\n\n\t Ingrese la cantidad de valores a ingresar: ";cin>>i;
		i=i-1;
		float v[i];
		system("cls");
		cout<<"\n\n\t Ingrese los valores a guardar en el vetor: \n";
		
		for(int limite=0;limite<=i;limite++){
			cout<<"\n\t";cin>>v[limite];
		}
		
		int b2=1;
		
		do{
			system("cls");
			cout<<"\n\n\t Ingrese el valor a buscar en el vector: ";cin>>nb;
			for(int limite=0;limite<=i;limite++){
				if((v[limite])==nb){
					b=2;
				}
			}
			system("cls");
			
			if(b==2){
				//cout<<"\n\n\t el valor "<<nb<<" si se encuentra en el vector \n\n\n";
				MessageBox(NULL, "El valor si se encuentra en el vector "," Listo ", MB_OK);
				b2=2;	
			}else{	
				MessageBox(NULL, "El valor no se encuentra en el vector \n Ingrese un valor nuevamente "," Error ", MB_ABORTRETRYIGNORE + MB_ICONEXCLAMATION );
				b2=1;
			}
		}while(b2!=2);
		cout<<"\n\n\t\t Desea ingresar un nuevo vector: \n\t\t\t 1.-Si / 2.- No  ";cin>>c;
		
	}while(c!=2);
	system("pause");
}
