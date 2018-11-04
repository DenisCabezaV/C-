/*********************************************/
/* Programa: Vector_edad                     */
/*                                           */
/* Descripcion: Recibe un numero y una       */
/* letra varias veces para llenar un vector  */
/* de n elementos y muestra por pantalla     */
/* solo los que el numero sea mayor a 0 y    */
/* menor a 40.                               */
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
	int limite,x,s=0;
    cout<<"\n\n\tINGRESE EL LIMITE DEL VECTOR\n";
    cout<<"\n";cin>>limite;
	
	int edad[limite];
    char nom[limite];
	
	for(x=0;x<limite;x++){
    	system("cls");
        cout<<"INGRESE LA EDAD  "<<x<<"  del vector\n";
            cin>>edad[x];
        cout<<"INGRESE LA INICIAL DE SU NOMBRE  \n";
            cin>>nom[x];
	}
	
	system("cls");
    cout<<"      EDAD             INICIAL\n";
    
	for(x=1;x<=limite;x++){
        if(edad[x]<40 && edad[x]!=0){
            cout<<"       "<<edad[x]<<"        "<<nom[x]<<"\n";
        }                                       
    }
	
	cout<<endl;
	system("pause");
}
