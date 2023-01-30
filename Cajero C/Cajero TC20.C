#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

/*Llamado de prototipos*/

void Presentation(void);
float deposito(void);
float Retiro(float Balance);
float Recarga(float Balance);
int Claro(int D[2]);
int TIGO(int D[2]);

void main(void){
  /*Declaration of variables*/
	int i,a,B,N;
	char Name[6],pass[4],C_C[3],OPC1[8],OPC2[8];
	float Balance,Balance2;
    Balance=0;
    for(i=1;i<=3;i+=1){clrscr();
    /*Giving them a meaning*/
	printf("\nUsuario==admin  contrase%ca==123\n",164);
    printf("\nUsuario: ");
    scanf("%5s",&Name);
    printf("\nContrase%ca: ", 164);
    scanf("%3s",&pass);
    if((strcmp(Name,"admin")==0)&&((strcmp(pass,"123")==0))){
             /*System options*/
             do{clrscr();
            printf("****************************\nBienvenido %s \n",Name);
            printf("\nPor favor introduzca una opcion: \n" );
            printf("*1.Presentacion \n*2.servicios ATM\n*3.Recarga\n*4.salir\n ");
            printf("--> ");
           scanf("%5s",&OPC1);
             N=atoi(OPC1);
            /*Validacion de menu 1*/
            while((N<0)||(N>4)||(N==0)){clrscr();
                printf("Error ,Introduzca una opcion abajo: \n");
                 printf("1.Presentacion \n2.servicios ATM\n3.Recarga\n4.salir\n-->");
                scanf("%5s",&OPC1);
                N=atoi(OPC1);
            }/*Fin validacion de OPC1*/
                /*Menu 1*/
                switch(N){
                case 1:
                    Presentation();
                    break;
                case 2:
		    clrscr();
                    printf("Introduzca una de las opciones abajo:\n ");
                    printf("1.Depositar \n 2.Retirar \n 3.Consultar saldo \n");
                    scanf("%5s",&OPC2);
                     B=atoi(OPC2);
                    /*Valicacion de opc2 */
                    while((B<0)||(B>3)||(B==0)){clrscr();
                            printf("Error,introduzca una opcion abajo: \n");
                            printf("1.Depositar \n 2.Retirar \n 3.Consultar saldo: \n--> ");
                            scanf("%5s",&OPC2);
                            B=atoi(OPC2);
                            }/*Validacion de OPC2*/
                            switch(B){
                            case 1:
                                Balance2=deposito();
                                Balance=Balance+Balance2;
                                break;
                            case 2:
                                if(Balance==0){
									clrscr();
                                    printf("No puede hacer eso , actualmente no tiene saldo en su cuenta\nDeposite para poder realizar esta accion\n");
                                }else{
                                     Balance2=Retiro(Balance);
                                     Balance=Balance-Balance2;
                                }
				break;
                            case 3:
                                printf("Su saldo de cuenta es de: %.2f cordobas \n",Balance);
                                break;
                            }
                    break;
                case 3:
					if(Balance==0){
						clrscr();
						printf("Opcion no disponible\n no tiene saldo en su cuenta\n por favor deposite\n");
					}else{
						Balance2=Recarga(Balance);
						Balance=Balance-Balance2;
					}
                    break;
                case 4:
                    break;
                }/*Primer menu*/
                /*Validacion de ultima opcion*/
			if(N==4){
				printf("\n");
			}else{
				printf("\n Desea hacer otra transaccion? S(Si),N(No) \n");
				scanf("%2s",&C_C);
			     }
			}while((strcmp(C_C,"S")==0)||(strcmp(C_C,"s")==0));
                /*Final atm*/
                i=4;
		a=3;
    }/*Login menu*/else{
        printf("error , intente de nuevo ");
	a=1;
	sleep(3);
    }
    }/*End for*/
	if(a==3){
     	printf("\nGracias por utilizar nuestros servicios \n ");
    	 }else{
       printf("\nHa acabado sus intentos");
       printf("\n Regrese en 5 minutos o vuelva a intentarlo\n");
    	 }
	getch();
}

void Presentation(void){
    clrscr();
    printf("****   ******************   ******\n");
    printf("****   ******************   ******\n");
    printf("****   ******************         \n");
    printf("****   ****         *****   ******\n");
    printf("****   ****   ****  *****   ******\n");
    printf("****   ****   ****  *****   ******\n");
    printf("****   ****   ****  *****   ******\n");
    printf("****          ****  *****   ******\n");
    printf("******************  **************\n");
    printf("******************  **************\n");
    printf("******************  **************\n");
    printf("\nUniversidad: Universidad nacional de Ingenieria\n ");
    printf("\nFacultad de electrotecnia y computacion\n");
    printf("Carrera: Ingenieria en computacion\n");
    printf("Nombres:\n Anthony Edgard Jackson Jerez #2020-0320U \n  Leonardo Josu%c Cardoze Carballo #2020-1056 \n   Mahiza Victoria Gonz%clez Vanegas 2020-0436U \n", 130, 160);
    printf("Grupo: 1M3-CO \n");
    printf("Profesor: Nelson Alejandro Barrios Gonzalez \n");
    printf("Fecha: 07/07/2020 \n");
    printf("\nPresiona cualquier tecla para continuar\n");
    getch();
}

float deposito(void){
    float Balance,Dolar;char OPC3[6],Deposit[10];float A,C;
    int L;
    clrscr();
    printf("Ingrese la moneda que utilizara: \n");
    printf("1.Dolares\n2.Cordobas \n -->");scanf("%5s",&OPC3);
    L=atoi(OPC3);
    /*Validacion de opciones*/
    while((L<=0)||(L>=3)||(L==0)){clrscr();
        printf("Error , Introduzca una opcion abajo: \n");
        printf("1.Dolares\n 2.Cordobas \n --> ");scanf("%5s",&OPC3);
        L=atoi(OPC3);
    }/*Fin validacion opc3*/
    if(L==1){clrscr();
        /*Deposito dolares*/
        printf("Digite su cantidad en dolares: ");scanf("%9s",&Deposit);
        A=atof(Deposit);
        Dolar=A*33.72;
        while((A<=0)||(Dolar>10000)||(A==0)){clrscr();
            if(A<=0){
            printf("No se aceptan numeros negativos o valores igual a 0\n");
            printf("Digite su cantidad en dolares: ");scanf("%9s",&Deposit);
            A=atof(Deposit);
            }else{
            printf("La cantidad ingresada es mayor a 10,000 cordobas , no se permiten depositos mayor a esa cantidad \n");
            printf("Digite su cantidad en dolares: ");scanf("%9s",&Deposit);
            A=atof(Deposit);
            }
            Dolar=A*33.72;
        }/*Terminacion  validacion de dolares*/
        printf("La cantidad que usted deposito es de: %.2f cordobas \n",Dolar);
        Balance=Dolar;
    }else{/*Deposito cordobas*/clrscr();
         printf("Digite su cantidad en cordobas: ");scanf("%9s",&Deposit);
         C=atof(Deposit);
        while((C<=0)||(C>10000)||(C==0)){clrscr();
            if(Deposit<=0){
            printf("No se aceptan numeros negativos \n");
            printf("Digite  cantidad la cantidad a depositar: ");scanf("%9s",&Deposit);
            C=atof(Deposit);
            }else{
            printf("La cantidad ingresada es mayor a 10,000 \n");
            printf("Digite  la cantidad a depostiar: ");scanf("%9s",&Deposit);
            C=atof(Deposit);
            }
        }/*Terminacion  validacion de dolares*/
        Balance=C;
    }
    return Balance;
}

float Retiro(float Balance){
     float Dolar,RetiroT,B;char OPC3[8],Deposit[10];int A,C;
     clrscr();
	 if(Balance <34.64){
		 printf("2.Cordobas\n--> ");
		 scanf("%5s",&OPC3);
		 C=atoi(OPC3);
		 while(C!=2){clrscr();
			 printf("Error,su cuenta tiene menos de la tasa de cambio\n2.Cordobas\n--> ");
			 scanf("%5s",&OPC3);
			 C=atoi(OPC3);
		 }
	 }else{
		printf("Ingrese la moneda que utilizara: \n");
    printf("1.Dolares\n2.Cordobas \n--> ");scanf("%5s",&OPC3);
    C=atoi(OPC3);
    /*Validacion de opciones*/
    while((C<=0)||(C>=3)||(C==0)){clrscr();
        printf("Error , Introduzca una opcion abajo: \n");
        printf("1.Dolares\n2.Cordobas \n--> ");scanf("%5s",&OPC3);
        C=atoi(OPC3);
		}/*Fin validacion opc3*/ 
	 }
    if(C==1){clrscr();
        /*retiro dolares*/
        printf("Digite su cantidad en dolares: ");scanf("%9s",&Deposit);
        A=atof(Deposit);
        RetiroT=A*34.64;
        while((A<=0)||(RetiroT>Balance)||(A==0)){system("cls");
            if(Deposit<=0){
            printf("No se acceptan numeros negativos \n");
            printf("Digite su cantidad en dolares: ");scanf("%9s",&Deposit);
            A=atof(Deposit);
            }else{
            printf("La cantidad ingresada es mayor a %.2f cordobas \n",Balance);
            printf("Digite su cantidad en dolares: ");scanf("%9s",&Deposit);
            A=atof(Deposit);
            }
            RetiroT=A*34.64;
        }/*Terminacion  validacion de dolares*/
        Dolar=RetiroT;
        Balance=Dolar;
    }else{/*retiro cordobas*/
         printf("Digite su cantidad en cordobas: ");scanf("%9s",&Deposit);
         B=atof(Deposit);
        while((B<=0)||(B>Balance)){clrscr();
            if(B<=0){
            printf("No se acceptan numeros negativos \n");
            printf("Digite  cantidad la cantidad a reitrar: ");scanf("%9s",&Deposit);
            B=atof(Deposit);
            }else{
            printf("La cantidad ingresada es mayor a %.2f \n",Balance);
            printf("Digite  la cantidad a retirar: ");scanf("%9s",&Deposit);
            B=atof(Deposit);
            }
        }/*Terminacion  validacion de dolares*/
        Balance=B;
    }/*Final deposito cordobas*/
    printf("la cantidad que ustedc retiro es de: %.2f",Balance);
    return Balance;
}

float Recarga(float Balance){
	char Cellphone[11],Recar[20],OPC[10],C[5];int B,i,D,L,P[2],M;float A,Menos;
	clrscr();
	printf("Ingrese el tipo de operador a recargar\n1.Claro\n2.Tigo\n--> ");
	scanf("%5s",&OPC);
	B=atoi(OPC);
	while((B<1)||(B>2)||(B==0)){clrscr();
	printf("Error,ingrese una opcion valida\n1.Claro\n2.Tigo\n--> ");
	scanf("%5s",&OPC);
	B=atoi(OPC);
	}
	switch(B){
		case 1:
		printf("Ingrese su numero celular: ");
		scanf("%10s",&Cellphone);
		D=atoi(Cellphone);
		L=strlen(Cellphone);
		while((L<8)||(L>8)||(D==0)){clrscr();
			printf("Ese no es un numero celular valido\n");
			printf("Ingrese una valido\n--> ");
			scanf("%10s",&Cellphone);
			D=atoi(Cellphone);
			L=strlen(Cellphone);
		}
		for(i=0;i<=4-1;i+=1){
        	C[i]=Cellphone[i];
		}
		printf("\nIngrese su cantidad a recargar\n--> ");
		scanf("%10s",&Recar);
		A=atof(Recar);
		while((A<0)||(A>Balance)||(A==0)){clrscr();
			if(A<0){
				printf("No se permite el ingreso de numeros negativos o letras\n");
				printf("Ingrese un numero valido\n --> ");
				scanf("%10s",&Recar);
			}else{
				printf("Su cantidad ingresada es mayor que %.2f cordobas en su cuenta\n",Balance);
				printf("Ingrese una cantidad valida\n--> ");
				scanf("%10s",&Recar);
			}
			A=atof(Recar);
		}
		P[1]=atoi(C);
		M=Claro(P);
		if(M==1){
			printf("Su recarga de %.2f al numero %s ha sido realizada ",A,Cellphone);
			Menos=A;
		}else{
			printf("\n Ingrese un numero Claro a la proxima");
		}
		break;
		case 2:
		printf("Ingrese su numero celular: ");
		scanf("%10s",&Cellphone);
		D=atoi(Cellphone);
		L=strlen(Cellphone);
		while((L<8)||(L>8)||(D==0)){clrscr();
			printf("Ese no es un numero celular valido\n");
			printf("Ingrese una valido\n--> ");
			scanf("%10s",&Cellphone);
			D=atoi(Cellphone);
			L=strlen(Cellphone);
		}
		for(i=0;i<=4-1;i+=1){
        	C[i]=Cellphone[i];
		}
		printf("Ingrese su cantidad a recargar\n--> ");
		scanf("%10s",&Recar);
		A=atof(Recar);
		while((A<0)||(A>Balance)||(A==0)){clrscr();
			if(A<0){
				printf("No se permite el ingreso de numeros negativos o letras\n");
				printf("Ingrese un numero valido\n --> ");
				scanf("%10s",&Recar);
			}else{
				printf("Su cantidad ingresada es mayor que %.2f cordobas en su cuenta\n",Balance);
				printf("Ingrese una cantidad valida\n-->");
				scanf("%10s",&Recar);
			}
			A=atof(Recar);
		}
		P[1]=atoi(C);
		M=TIGO(P);
		if(M==1){
			printf("Su recarga de %.2f al numero %s ha sido realizada ",A,Cellphone);
			Menos=A;
		}else{
			printf("\n Ingrese un numero TIGO a la proxima");
		}
		break;
	}
	return Menos;
}

int Claro(int D[2]){
	int L;
	if((D[1]>=5740)&&(D[1]<=5749)){L=1;}else{if((D[1]>=5780)&&(D[1]<=5789)){L=1;}
	else{if((D[1]>=5800)&&(D[1]<=5809)){L=1;}else{if((D[1]>=8330)&&(D[1]<=8369)){L=1;}
	else{if((D[1]>=8400)&&(D[1]<=8499)){L=1;}else{if((D[1]>=8500)&&(D[1]<=8549)){L=1;}
	else{if((D[1]>=8600)&&(D[1]<=8699)){L=1;}else{if((D[1]>=8700)&&(D[1]<=8749)){L=1;}
	else{if((D[1]>=8820)&&(D[1]<=8859)){L=1;}else{if((D[1]>=8900)&&(D[1]<=8949)){L=1;}
	else{printf("\nEste numero no es claro ");L=2;}
	}}}}}}}}}
	return L;
}

int TIGO(int D[2]){
	int L;
	if((D[1]>=7710)&&(D[1]<=7719)){L=1;}else{if((D[1]>=7750)&&(D[1]<=7759)){L=1;}
   else{if((D[1]>=7870)&&(D[1]<=7879)){L=1;}else{if((D[1]>=8150)&&(D[1]<=8159)){L=1;}
   else{if((D[1]>=8260)&&(D[1]<=8269)){L=1;}else{if((D[1]>=8320)&&(D[1]<=8329)){L=1;}
   else{if((D[1]>=8370)&&(D[1]<=8399)){L=1;}else{if((D[1]>=8450)&&(D[1]<=8489)){L=1;}
   else{if((D[1]>=8550)&&(D[1]<=8559)){L=1;}else{if((D[1]>=8590)&&(D[1]<=8599)){L=1;}
   else{if((D[1]>=8670)&&(D[1]<=8689)){L=1;}else{if((D[1]>=8750)&&(D[1]<=8779)){L=1;}
   else{if((D[1]>=8800)&&(D[1]<=8819)){L=1;}else{if((D[1]>=8860)&&(D[1]<=8899)){L=1;}
   else{if((D[1]>=8950)&&(D[1]<=8979)){L=1;}else{if((D[1]>=8890)&&(D[1]<=8899)){L=1;}
   else{printf("\n El numero ingresado no es TIGO\n");L=2;}
   }}}}}}}}}}}}}}}
   return L;
}