/*********************************************/
/* Programa: Cajero_Automatico               */
/*                                           */
/* Descripcion: Simula un cajero Automatico  */
/*                                           */
/* Autor: Denis Cabeza V.                    */
/*                                           */
/* Fecha: 03 Noviembre 2018                  */
/* Esmeraldas - Ecuador                      */
/* https://deniscabezav.github.io/C-plusplus */
/*********************************************/

#include<iostream>
using namespace std;

int main(){
	int bc, bd,bv, in, b_total, monto;
	
	cout << "Billetes de 5: "; cin >> bc;
	cout << "Billetes de 10: "; cin >> bd;
	cout << "Billetes de 20: "; cin >> bv;
	
	b_total = (bc*5)+(bd*10)+(bv*20);
	cout << "Monto a retirar: "; cin >> monto;
	
	int b_v=0, b_d=0, b_c=0;
	
	 if(monto % 5 == 0){
	 	if(b_total >= monto){
	 	    int temp;
	 	    
	 	    b_v= monto/20;
	 	        if(b_v>=bv)
	 	            b_v = bv;       
	 	    temp = monto-(b_v*20);
	 	    
	 	    if(temp >= 5)
	 	        b_d = temp/10;
	 	            if(b_d>=bd)
	 	                b_d = bd;
            temp = temp - (b_d*10);
	 	    
	 	    if(temp >= 5)
	 	        b_c = temp/5;
	 	            if(b_c>=bc)
	 	                b_c = bc;
            temp = temp - (b_d*5);
	 	        
	 	        cout << endl;
	 	        cout << "SU RETIRO TENDRA\n";
	 	        cout << b_v << " Billetes de 20\n";
	 	        cout << b_d << " Billetes de 10\n";
	 	        cout << b_c << " Billetes de 5\n";
	 	        
	 	        bc -=  b_c;
	 	        bd -=  b_d;
	 	        bv -=  b_v;
	 	        
				cout << endl;
	 	        cout << "AUN LE QUEDAN\n";
	 	        cout << bv << " Billetes de 20\n";
	 	        cout << bd << " Billetes de 10\n";
	 	        cout << bc << " Billetes de 5\n";
	 	}
        else{
            cout << "Saldo insuficiente no puede retirar\n";
        }
	 }
	 else{
	 	cout << "El valor ingresado no es multiplo de 5\n";
	 }
	 system("pause");
}
