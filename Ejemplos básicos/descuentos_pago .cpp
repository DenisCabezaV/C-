/*********************************************/
/* Programa: Descuentos_pago                 */
/*                                           */
/* Descripcion: Leer mas abajo.              */
/*                                           */
/* Autor: Denis Cabeza V.                    */
/*                                           */
/* Fecha: 03 Noviembre 2018                  */
/* Esmeraldas - Ecuador                      */
/* https://deniscabezav.github.io/C-plusplus */
/*********************************************/

/*realice un programa que muestre el total a pagar de un comprador, el cual puede apceder as las siguientes opciones 1.PAGO EN EFECTIVO
2.- PAGO CON TARJETA DE CREDITO------ 1 SI LA DEUDA ES 0 REALICE UN DESCUENTO DEL 10% PARA LAS COMPRAS MAYORES DE 100 DOLARES Y 5% A LAS COMPRAS <= A 100
si la deuda no es cero no tendra descuento------ 2 pregunte el numero de meses a diferir y muestre la cuota mensual a pagar*/

#include <iostream>
using namespace std;
main()
{
float deu,tc,desm,desn,dif;
int mes,op;
system("color 0b");
cout<<"\t\tINGRESE EL TOTAL DE LA COMPRA\n";      
cout<<"\t";cin>>tc;
system("cls");
cout<<"\t\tINGRESE UNA OPCION\n";      
cout<<"\n\t1.- PAGO EN EFECTIVO\n\t2.- PAGO CON TARJETA\n\n";
cin>>op;
      switch(op)
      {
            case 1:
                 system("cls");
                 cout<<"\t\tINGRESE EL MONTO DE SU DEUDA\n";
                 cin>>deu;
                 if(deu==0)
                 {
                          if(tc>100)
                          {
                                    system("cls");
                                    desm=tc*0.10;
                                    tc=tc-desm;
                                    cout<<"\n\tSU TOTAL A PAGAR ES: "<<tc<<"\n\tCON UN DESCUENTO DEL 10%\n\n";
                          }
                          else
                          {
                                    system("cls");
                                    desn=tc*0.05;
                                    tc=tc-desn;
                                    cout<<"\n\tSU TOTAL A PAGAR ES: "<<tc<<"\n\tCON UN DESCUENTO DEL 05%\n\n";
                          }
                 }
                 else
                 {
                          system("cls");
                          cout<<"\n\tSU TOTAL A PAGAR ES: "<<tc<<"\n\tUSTED NO HA TENIDO NINGUN DESCUENTO\n\n";
                 }
            break;
            case 2:
                 system("cls");
                 cout<<"\t\tINGRESE UNA OPCION\n";      
                 cout<<"\n\t1.- DIFERIDO A 3  MESES\n\t2.- DIFERIDO A 6  MESES\n\t3.- DIFERIDO A 9  MESES\n\t4.- DIFERIDO A 12 MESES\n\n";
                 cin>>mes;
                          switch(mes)
                          {
                                case 1:
                                     system("cls");
                                     dif=tc/3;
                                     cout<<"\n\tSU TOTAL A PAGAR ES: "<<tc<<"\n\tDIFERIDO A 3 MESES\n\tCUOTAS MENSUALES DE: "<<dif<<"\n\n";
                                break;
                                case 2:
                                     system("cls");
                                     dif=tc/6;
                                     cout<<"\n\tSU TOTAL A PAGAR ES: "<<tc<<"\n\tDIFERIDO A 6 MESES\n\tCUOTAS MENSUALES DE: "<<dif<<"\n\n";
                                break;
                                case 3:
                                     system("cls");
                                     dif=tc/9;
                                     cout<<"\n\tSU TOTAL A PAGAR ES: "<<tc<<"\n\tDIFERIDO A 9 MESES\n\tCUOTAS MENSUALES DE: "<<dif<<"\n\n";
                                break;
                                case 4:
                                     system("cls");
                                     dif=tc/12;
                                     cout<<"\n\tSU TOTAL A PAGAR ES: "<<tc<<"\n\tDIFERIDO A 12 MESES\n\tCUOTAS MENSUALES DE: "<<dif<<"\n\n";
                                break;
                          }
            break;
      }
system("\npause");            
}
