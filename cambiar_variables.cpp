/*********************************************/
/* Programa: Cambiar_variables               */
/*                                           */
/* Descripcion: Recibe por teclado 2         */
/* variables he intercambia sus valores.     */
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
    int a,b,aux;
    
    cout<<"INGRESE EL VALOR DE a"<<endl;
    	cin>>a;
    cout<<"\nINGRESE EL VALOR DE b"<<endl;
    	cin>>b;
    cout<<"\n\ta: "<<a<<"\tb: "<<b;
    	aux=a;
    	a=b;
    	b=aux;
    cout<<"\n\nLOS NUEVOS VALORES DE a y b SON LOS SIGUIENTES"<<endl;
    cout<<"\ta:  "<<a<<"\tb: "<<b<<"\n";
    
	system("pause");
}
