/*********************************************/
/* Programa: Compara_Frases                  */
/*                                           */
/* Descripcion: Recibe 2 fraces por teclado  */
/* y verifica si son iguales o desiguales.   */
/*                                           */
/* Autor: Denis Cabeza V.                    */
/*                                           */
/* Fecha: 03 Noviembre 2018                  */
/* Esmeraldas - Ecuador                      */
/* https://deniscabezav.github.io/C-plusplus */
/*********************************************/

#include<iostream>
#include<string.h>

using namespace std;
 
main(){
 		char pfrase[20], sfrase[20];
        cout<<"\n\n\t Ingrese la primera frase: ";
			gets(pfrase);
        cout<<"\n\n\t Ingrese la segunda frase: ";
			gets(sfrase);
        
		if(strcmp(pfrase,sfrase) ==0 ){
			cout<<"\n\n\n\t\t Frases iguales ";
		}else{
			cout<<"\n\n\n\t\t Frases diferentes";
		}
		
        return 0;
}   
