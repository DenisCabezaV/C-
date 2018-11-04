/*********************************************/
/* Programa: Ejemplos_varios                 */
/*                                           */
/* Descripcion: Varios ejemplos.             */
/*                                           */
/* Autor: Denis Cabeza V.                    */
/*                                           */
/* Fecha: 03 Noviembre 2018                  */
/* Esmeraldas - Ecuador                      */
/* https://deniscabezav.github.io/C-plusplus */
/*********************************************/

#include<iostream>
#include<windows.h>
using namespace std;

int veri(int a);
main()
{
int e,op,nt,x,o=1,dv,c,n;
float acu=0;
      system("color 0b");
      do
      {
        system("cls");
        cout<<"\n\t\tMENU";cout<<endl;cout<<"\n\t1.- SERIE";cout<<"\n\t2.- VECTOR INVERTIDO SIGNO";cout<<"\n\t3.- DIVISORES DE UNO Y NUMERO";cout<<"\n\t4.- SALIR\n";cout<<"\nElija una opcion:  ";cin>>op;
        switch(op)
        {
                  case 1:
                       system("cls");
                       cout<<"\n\tIngrese el numero de terminos\n";cin>>nt;
                       e=0;
                       for(x=1;x<=nt;x++)
                       {
                                         if(x%2==0)
                                         {
                                             acu=acu+(((x-1)*10)/(x+1));
                                                  
                                         }
                                         else
                                         {
                                             e=e+1;
                                             acu=acu+(e/(x+1));
                                         }                    
                       }
                       e=0;
                       for(x=1;x<=nt;x++)
                       {
                                         if(x%2==0)
                                         {
                                             cout<<" "<<((x-1)*10)<<"\n";
                                             cout<<"--- +\n";
                                             cout<<" "<<x+1<<"\n"; 
                                             cout<<endl;    
                                         }
                                         else
                                         {
                                             e=e+1;
                                             cout<<" "<<e<<"\n";
                                             cout<<"--- +\n";
                                             cout<<" "<<x+1<<"\n";
                                             cout<<endl; 
                                         }
                       }
                       cout<<endl;
                       cout<<"El resultado de la serie es: "<<acu;
                  break;
                  case 2:
                       system("cls");
                       cout<<"\n\tIngrese la dimension del vector\n";cin>>dv;
                       int vec[dv],veci[dv];
                       c=dv;
                       for(x=0;x<=dv-1;x++)
                       {
                                           c=c-1;
                                           system("cls");
                                           cout<<"\n\tESPACIO "<<x+1<<" DEL VECTOR\n";cout<<"\t";cin>>vec[x];
                                                       veci[c]=((-1)*vec[x]);
                       }
                       system("cls");
                       cout<<"\tVECTOR NORMAL\tVECTOR INVERTIDO";
                       for(x=0;x<=dv-1;x++)
                       {
                                           cout<<"\n\t\t"<<vec[x]<<"\t\t"<<veci[x]<<endl;
                       }
                  break;
                  case 3:
                       system("cls");
                       cout<<"\n\tINGRESE UN NUMERO  ";cin>>n;cout<<endl;veri(n);
                  break;
                  case 4:
                       system("cls");
                       cout<<"\n\n\tGRACIAS POR USAR ESTE SOFTWARE"<<endl;
                       Sleep(2000);
                       system("exit");
                  break;
                  
        }
      cout<<endl;system("pause");system("cls");
      cout<<"\n\tDESEA ESCOGER OTRA OPCION";cout<<"\n1.- SI";cout<<"\n2.- NO\n";cout<<"\nElija una opcion:  ";cin>>o;
      }
      while(o==1);
}

int veri(int a)
{
    int d=0,t=0,c=0,s=0;
    if(a!=2 && a!=3 && a!=5 && a!=7)
    {
            if(a%2==0){d=1;}
            if(a%3==0){t=1;}
            if(a%5==0){c=1;}
            if(a%7==0){s=1;}
            cout<<"1\nEL NUMERO ES DIVISIBLE PARA";if(d==1){cout<<", 2";}if(t==1){cout<<", 3";}if(c==1){cout<<", 5";}if(s==1){cout<<", 7";}
    }
    else
    {cout<<"0\n\tEL NUMERO INGRESADO ES UN NUMERO PRIMO\n";}
}
