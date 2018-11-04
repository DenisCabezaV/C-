/*********************************************/
/* Programa: Ejemplo1                        */
/*                                           */
/* Descripcion: Realiza 2 procesos           */
/* determinados por un menu.                 */
/*                                           */
/* Autor: Denis Cabeza V.                    */
/*                                           */
/* Fecha: 03 Noviembre 2018                  */
/* Esmeraldas - Ecuador                      */
/* https://deniscabezav.github.io/C-plusplus */
/*********************************************/

#include <iostream>
using namespace std;

main()
{
      system("color 0b");
      int a,b,c,s,op,op1,com,ncom,aux,x,in;
      double des;
      cout<<"\n\tSELECCIONE UNA OPCION ";
      cout<<"\n\t1.- Programa 1";
      cout<<"\n\t2.- Programa 2\n";
      cin>>in;
      switch(in)
      {
                 case 1:
                        system("cls");
                        cout<<"Ingrese Las longuitudes\n";
      cout<<"\nIngrese a: \t";cin>>a;
      cout<<"\nIngrese b: \t";cin>>b;
      cout<<"\nIngrese c: \t";cin>>c;
      s=a+b;
      if (s>c)
      {
         system("cls");
         cout<<"\n\tSI EXISTE EL TRIANGULO";
         if(a==b)
         {
                 if(b==c)
                 {
                         cout<<"\n\tPERTENECE AL TIPO DE TRIANGULO--> Equilatero\n";  
                 }
                 else
                 {
                     
                         cout<<"\n\tPERTENECE AL TIPO DE TRIANGULO--> Isoceles\n";
                 }
         }
         else
         {
             if(b==c)
             {
                     
                     cout<<"\n\tPERTENECE AL TIPO DE TRIANGULO--> Isoceles\n";
             }
             else
             {
                     
                     if(a==c)
                     {
                     
                             cout<<"\n\tPERTENECE AL TIPO DE TRIANGULO--> Isoceles\n";
                     }
                     else
                     {
                     
                         cout<<"\n\tPERTENECE AL TIPO DE TRIANGULO--> Escaleno\n";
                     }
             }
         }
      }
      else
      {
      system("cls");
         cout<<"\n\tNO EXISTE EL TRIANGULO";
        if(a==b)
         {
                 if(b==c)
                 {
                         cout<<"\n\tPERTENECE AL TIPO DE TRIANGULO--> Equilatero\n";  
                 }
                 else
                 {
                     
                         cout<<"\n\tPERTENECE AL TIPO DE TRIANGULO--> Isoceles\n";
                 }
         }
         else
         {
             if(b==c)
             {
                     
                     cout<<"\n\tPERTENECE AL TIPO DE TRIANGULO--> Isoceles\n";
             }
             else
             {
                     
                     if(a==c)
                     {
                     
                             cout<<"\n\tPERTENECE AL TIPO DE TRIANGULO--> Isoceles\n";
                     }
                     else
                     {
                     
                         cout<<"\n\tPERTENECE AL TIPO DE TRIANGULO--> Escaleno\n";
                     }
             }
         }
      }
                 break;
                 case 2:
                         system("cls");
                         cout<<"\n\tINGRESE EL MONTO DE LA COMPRA\n";
      cin>>com;
      cout<<"\n\tSELECCIONE UNA OPCION DE PAGO";
      cout<<"\n\t1.- Pago en efectivo";
      cout<<"\n\t2.- Pago con tarjeta\n";
      cin>>op;
      switch(op)
      {
                 case 1:
                      system("cls");
                      
                      cout<<"\n\tINGRESE EL NUMERO DEL MES DE LA COMPRA";
                      cout<<"\n\t 1.- Enero";
                      cout<<"\n\t 2.- Febrero";
                      cout<<"\n\t 3.- Marzo";
                      cout<<"\n\t 4.- Abril";
                      cout<<"\n\t 5.- Mayo";
                      cout<<"\n\t 6.- Junio";
                      cout<<"\n\t 7.- Julio";
                      cout<<"\n\t 8.- Agosto";
                      cout<<"\n\t 9.- Septiembre";
                      cout<<"\n\t10.- Octubre";
                      cout<<"\n\t11.- Noviembre";
                      cout<<"\n\t12.- Diciembre\n";
                      cin>>op1;
                      system("\npause");
                       
                          if (op1%2==0)
                          {
                          aux=1;
                          }
                          else
                          {
                          aux=0;
                          }
                      system("\npause");
                      if(aux==1)
                      {
                                if(com>100)
                                {
                                           des=com*0.50;
                                           ncom=com-des;
                                           system("cls");
                                           cout<<"\n\tEL MONTO DE SU COMPRA ES DE: "<<com<<" DOLARES\n";
                                           cout<<"\tUSTED TIENE UN DESCUENTO DE: "<<des<<" DOLARES\n";
                                           cout<<"\tSU TOTAL A CANCELAR ES DE: "<<ncom<<" DOLARES\n";
                                }
                                else
                                {
                                    system("cls");
                                           cout<<"\n\tEL MONTO DE SU COMPRA ES DE: "<<com<<" DOLARES\n";
                                           cout<<"\tUSTED TIENE UN DESCUENTO DE: 0 DOLARES\n";
                                           cout<<"\tSU TOTAL A CANCELAR ES DE: "<<com<<" DOLARES\n";
                                }
                      }
                      else
                      {
                           des=com*0.05;
                                           ncom=com-des;
                                           system("cls");
                                           cout<<"\n\tEL MONTO DE SU COMPRA ES DE: "<<com<<" DOLARES\n";
                                           cout<<"\tUSTED TIENE UN DESCUENTO DE: "<<des<<" DOLARES\n";
                                           cout<<"\tSU TOTAL A CANCELAR ES DE: "<<ncom<<" DOLARES\n";
                      }
                 break;
                 case 2:
                      if(com<100)
                      {
                                 des=com*0.02;
                                   ncom=com+des;
                                   system("cls");
                                    cout<<"UNO";
                                    cout<<"\n\tEL MONTO DE SU COMPRA ES DE: "<<com<<" DOLARES\n";
                                    cout<<"\tUSTED TIENE UN INTERES DE: "<<des<<" DOLARES\n";
                                     cout<<"\tSU TOTAL A CANCELAR ES DE: "<<ncom<<" DOLARES\n";
                      }
                      else
                      {
                          if(com>100 && com<150)
                          {
                                    des=com*0.01;
                                   ncom=com+des;
                                   system("cls");
                                   cout<<"DOS";
                                    cout<<"\n\tEL MONTO DE SU COMPRA ES DE: "<<com<<" DOLARES\n";
                                    cout<<"\tUSTED TIENE UN INTERES DE: "<<des<<" DOLARES\n";
                                     cout<<"\tSU TOTAL A CANCELAR ES DE: "<<ncom<<" DOLARES\n"; 
                          }
                          else
                          {
                              if(com>150)
                              {
                                    
                                   system("cls");
                                   cout<<"TRES";
                                    cout<<"\n\tEL MONTO DE SU COMPRA ES DE: "<<com<<" DOLARES\n";
                                           cout<<"\tUSTED TIENE UN INTERES DE: 0 DOLARES\n";
                                           cout<<"\tSU TOTAL A CANCELAR ES DE: "<<com<<" DOLARES\n"; 
                                     }
                          }
                      }
                 break;

      }
                 break;
                 default:
                        system("cls");
                        cout<<"\n\tINGRESE UNA OPCION VALIDA";
                 break;
      }


system("\npause");
}
