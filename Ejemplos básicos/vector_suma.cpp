/*********************************************/
/* Programa: Vector_suma                     */
/*                                           */
/* Descripcion: Recibe un vector de n        */
/* elementos.                                */
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
	int limite,t, x;
	
	do{
		cout<<"\n\tINGRESE EL LIMITE DEL VECTOR"<<endl;
			cin>>limite;
				t=limite/2;
	}while(t%2!=0);
	
	cout<<endl;
	int vec1[limite], vec2[limite], vec3[limite];
	system("cls");
    
	for(x=0;x<limite;x++){//llenar vectores
		cout<<"\n\tINGRESE EL ELEMENTO "<<x+1<<" del vector 1:\t";
			cin>>vec1[x];
				cout<<endl;
		cout<<"\n\tINGRESE EL ELEMENTO "<<x+1<<" del vector 2:\t";
			cin>>vec2[x];
				cout<<endl;
		system("cls");
    }
	
	for(x=0;x<limite;x++){//sumar vectores
		if(x%2!=0){
			vec3[x] = vec1[x]+vec2[t+x];
				cout<<"\n\tRESULTADO"<<"["<<x+1<<"]= "<<vec3[x];
		}else{
			vec3[x] = vec1[x]+vec2[t-x];
				cout<<"\n\tRESULTADO"<<"["<<x+1<<"]= "<<vec3[x];
		}
	}
	
	cout<<endl;cout<<endl;system("pause");     
}
