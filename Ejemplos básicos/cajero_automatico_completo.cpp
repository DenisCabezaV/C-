/*********************************************/
/* Programa: Cajero_Automatico_completo      */
/*                                           */
/* Descripcion: Simula un cajero Automatico  */
/* completo.                                 */
/*                                           */
/* Autor: Denis Cabeza V.                    */
/*                                           */
/* Fecha: 03 Noviembre 2018                  */
/* Esmeraldas - Ecuador                      */
/* https://deniscabezav.github.io/C-plusplus */
/*********************************************/

#include<conio.h>
#include<iostream>
#include<windows.h>
using namespace std;

main()
{
	int a=1234,u=4321,c,op,d=1,b10,b20,b5,r,aux,aux1;
	int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd);
	do
	{
			cout<<"\n\n\t Ingrese su contraseña: ";cin>>c;
			if(c==a)
			{
				system("cls");
				cout<<"\n\n\t\t Menu Administrador";
				cout<<"\n\n\n\n\t 1.- Recargar Cajero \n\t 2.- Consulta de Saldo \n\t 3.- Cambio de Contrasena Administrador \n\t 4.- Cambio Cpntrasena Usuario \n\t 5.- SALIR";
				cout<<"\n\n\t\t Elija una opcion del menu: ";cin>>op;
				if(op==5)
				{
					op=6;
				}
			}
			else
			{
				if(c==u)
				{
					system("cls");
					cout<<"\n\n\t\t Menu Usuario";	
					cout<<"\n\n\n\n\t 1.- Retiro \n\t 2.- Consulta de Saldo \n\t 3.- Cambio de Contrasena \n\t 4.- SALIR";
					cout<<"\n\n\t\t Elija una opcion del menu: ";cin>>op;
					switch(op)
					{
						case 1:
							op=5;
							break;
						case 2:
							op=2;
							break;
						case 3:
							op=4;
							break;
						case 4:
							op=6;
							break;
					}
				}
				else
				{
					system("cls");
					MessageBox(NULL, "\t Clave no registrada ", " ERROR", MB_OK);
				}
			}
				int r1, r2, r3, b,monto=0;
				switch(op)
				{
					case 1: //recarga de cajero
						do
						{
							system("cls");
							    cout<<"\n DIGITE LA CANTIDAD DE BILLETES DE $5 QUE DESEA RECARGAR: ";cin>>b5;r1=b5*5;
                                cout<<"\n DIGITE LA CANTIDAD DE BILLETES DE $10 QUE DESEA RECARGAR: ";cin>>b10;r2=b10*10;
                                cout<<"\n DIGITE LA CANTIDAD DE BILLETES DE $20 QUE DESEA RECARGAR: ";cin>>b20;r3=b20*20;
                                monto=monto+r1+r2+r3;
                                cout<<"\n\n\t SU SALDO EN EL CAJERO ES: "<<monto;
                                b=2;aux=monto;
							
							
							if((monto%5)!=0)
							{
								 MessageBox(NULL, "\t Valor de recarga invalido", "Error ", MB_OK);
								 d=1;
							}
							else
							{
								system("cls");
								cout<<"\n\n\t\t Desea realizar otra recarga: \n\t 1.- Si \n\t 2.- No \n";cin>>d;
							}
						}while(d!=2);
						break;
						
					case 2: // consulta de saldo disponible
						system("cls");
						cout<<"\n\n\t El saldo disponible para realizar retiros es de: $"<<monto;
						getch();
						break;
					
					case 3: //Cambio de contraseña de administrador
						do
						{
							system("cls");
							cout<<"\n\n\t\t Cambio de Contrasena Administrador";
							cout<<"\n\n Ingrese su contrasena: ";cin>>c;
							if(c==a)
							{
								system("cls");
								cout<<"\n\n\t\t Dijite su nueva contraseña: ";cin>>a;
								Sleep(300);
								MessageBox(NULL, "\t Su contraseña fue canviada con exito ", " Listo ", MB_OK);
								d=2;
							}
							else
							{
								MessageBox(NULL, "\t Contraseña incorrecta intente denuevo", " Error", MB_OK);
								d=1;
							}
						}while(d!=2);
						break;
						
					case 4: // cambio de clave usuario
						do
						{
							system("cls");
							cout<<"\n\n\t\t Cambio de Contrasena Cliente";
							cout<<"\n\n Ingrese su contrasena: ";cin>>c;
							if(c==u)
							{
								system("cls");
								cout<<"\n\n\t\t Dijite su nueva contraseña: ";cin>>a;
								Sleep(300);
								MessageBox(NULL, "\t LISTO", " Su contraseña fue canviada con exito", MB_OK);
								d=2;
							}
							else
							{
								MessageBox(NULL, "\t ERROR", " Contraseña incorrecta intente denuevo", MB_OK);
								d=1;
							}
						}while(d!=2);
						break;
					case 5: //retiro de dinero
						int ex;
						do
						{
							system("cls");
							cout<<"\n\n\t Ingrese el monto a retirar en multiplos de 5 hasta $ 100: ";cin>>ex;
							if((ex%5)==0)
							{
								if(ex<=monto)
								{
									monto=monto-ex;
									aux=ex/b20;
                                        r=b20-d;
                                        if(r!=0)
    								    {
                                           aux=r*10*2;
                                           r=aux/10;
                                           r=b10-aux;
                                           if(r!=0)
    								       {
                                             aux=r*5*2;
                                             aux=aux/5;
                                             r=b5-aux;
                                           }
                                        }
									
									MessageBox(NULL, "\t listo", " Su transaccion fue realizada con exito", MB_OK);
									
									cout<<"\n\n\t Desea realizar otro retiro: 1.- Si / 2.- No   ";cin>>d;
									
								}
								else
								{
									MessageBox(NULL, "\t Error", " El cajero no cuenta con el monto suficiente \n comuniquese con el administrador ", MB_OK);
									d=2;
								}
							}
							else
							{
								MessageBox(NULL, "\t Error", " monto no valido para retirar ", MB_OK);
								d=1;
							}			
							
						}while(d!=2);
						break;
					case 6: //Salir
						break;
				}
				
				system("cls");
				cout<<"\n\n\t Desea relalizar algo mas: 1.- Si / 2.- No  ";cin>>d;
				system("cls");
	}while(d!=2);
	getch();
}
