/*********************************************/
/* Programa: Vector_metodo_burbuja           */
/*                                           */
/* Descripcion: Recibe un vector de n        */
/* elementos y devuelve un vector ordenado   */
/* mediante el metodo de burbuja             */
/*                                           */
/* Autor: Denis Cabeza V.                    */
/*                                           */
/* Fecha: 03 Noviembre 2018                  */
/* Esmeraldas - Ecuador                      */
/* https://deniscabezav.github.io/C-plusplus */
/*********************************************/
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

main(){
	int temp,limite, x;
	int vec[limite];
	
	cout<<"\n\t Ingrese la cantidad de valores que va a almacenar el vector: ";cin>>limite;
	cout<<"\n\n\n";
	system("cls");
	
	cout<<"\n\t Ingrese los valores a almacenar en el vector: \n";
	for(x=0;x<limite;x++){
		cout<<"\t";cin>>vec[x];
	}
	
	system("cls");
	
	for (x=1;x<limite;x++) { 
		for (int i=0;i<(limite-1);i++){
			if (vec[i+1]<vec[i]){
				temp=vec[i];
				vec[i]=vec[i+1];
				vec[i+1]=temp;
			}
		}
   }
	
	printf("\nOrdenamiento por el metodo de burbuja");
	
	for (x=0;x<limite;x++)
		cout<<"\n\t"<<vec[x];
	
	getch();
}
