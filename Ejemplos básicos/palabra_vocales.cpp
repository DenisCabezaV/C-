/*********************************************/
/* Programa: Palabra_vocales                 */
/*                                           */
/* Descripcion: Recibe una palabra de maximo */
/* 20 caracteres e indica el numero de       */
/* vocales independientes que tiene la       */
/* palabra ingresada.                        */
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

	int op,x,a,e,i,o,u,li,j,nu,d,s;
    float r;
    char n[20];
    cout<<"\n\n";
    do{
		system("cls");
		cout<<"***************** Menu Examen **************"<<endl;
		cout<<"*************     1.VOCALES       **********"<<endl;
		cout<<"*************     2.salir         **********"<<endl;
		cout<<"\n\n";
		cout<<"Escoja una opcion del menu:"<<endl;
		cin>>op;
		fflush(stdin);
		
		switch(op){
			case 1:
				a=0; e=0;
				i=0; o=0;
				u=0;
				
				cout<<"*****************************"<<endl;
				cout<<"********* VOCALES  **********"<<endl;
				cout<<"*****************************"<<endl;
				
				cout<<"INGRESE EL NOMBRE"<<endl;
				gets(n);
				fflush(stdin);
				
				for(x=1;x<=10;x++){
					if(n[x]=='a'){
						a++;
					}else if(n[x]=='e'){
                		e++;
                	}else if(n[x]=='i'){
                		i++;
                	}else if(n[x]=='o'){
                		o++;
                	}else if(n[x]=='u'){
                		u++;
                	}
				}
				
				cout<<"\n\nSU NOMBRE TIENE A:"<<a<<endl; 
				cout<<"SU NOMBRE TIENE E:"<<e<<endl;
				cout<<"SU NOMBRE TIENE I:"<<i<<endl; 
				cout<<"SU NOMBRE TIENE O:"<<o<<endl; 
				cout<<"SU NOMBRE TIENE U:"<<u<<endl;
			break;
			
			case 2:
				cout<<"PULSE UNA TECLA PARA SALIR";
			break;
		}
		
		fflush(stdin);
		cin.get();
		
	}while(op!=2);
}
