#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

void conversionDBH(void){
	int num_O;
	int base_O;
	printf("\nDeclare el valor y la base del numero consecutivamente separados por un espacio.\n1)Decimal. \n2)Binario \n3)Hexadecimal \n");
	scanf("%d %d",&num_O,&base_O);
	switch(base_O){
		int base_n;
		
		case 1: 
				//Conversion a binario
				getch();
				int aux=num_O;
				int i;
				for(i=1;aux>0;i++){	//tamaño del arreglo
					aux=aux/2;
				}
				
				
				int *num_b;
				num_b = (int*)malloc(sizeof(int)*i);
				aux=num_O;
				
				int a;
				for(a=0;aux>0;a++){		//numero convertido guardado en arreglo
					num_b[a]=aux%2;
					aux=aux/2;
				}
				
				
				//Conversion a hexadecimal
				
				if(num_O<10){
					printf("\nDecimal: %d \nBinario: ",num_O);
					for(a=i-2;a>=0;a--){
						printf("%d",num_b[a]);
					}
					printf("\nHexadecimal: %d",num_O);
				}
				
				else{
					int o;
					aux=num_O;
					for(o=0;aux>0;o++){	//tamaño del arreglo
						aux=aux/16;
					}
					char *num_h;
					num_h = (char*)malloc(sizeof(char)*o);
					aux=num_O;
					int b;
					for(b=0;aux>0;b++){		//numero convertido guardado en arreglo
						int resto=aux%16;
						if((resto)<10){
							*(num_h+b)= resto;
						}
						else{
							if(resto == 10)
							*(num_h+b)='A';
							if(resto == 11)
							*(num_h+b)='B';
							if(resto == 12)
							*(num_h+b)='C';
							if(resto == 13)
							*(num_h+b)='D';
							if(resto == 14)
							*(num_h+b)='E';
							if(resto == 15)
							*(num_h+b)='F';
						}	
						aux=aux/16;
					}
					
					printf("\nDecimal: %d\nBinario: ", num_O);
					for(a=i-2;a>=0;a--){
						printf("%d",num_b[a]);
					}
					printf("\nHexadecimal: ");
					for(b=o-1;b>=0;b--){
						printf("%d",num_h[b]);
					}
				}
					
			break;
		case 2:
				
			
			break;
	}
}

int conversionC2(){
	int num_O;
	printf("Introduzca el numero que desea convertir(decimal): ");
	scanf("%d",&num_O);
	int aux=0;
	aux=num_O;
	int i;
	for(i=1;aux>0;i++){	//tamaño del arreglo
		aux=aux/2;
	}				
	
	int *num_b;
	num_b = (int*)malloc(sizeof(int)*(i+1));
	aux=num_O;
				
	int a;
	for(a=0;aux>0;a++){		//numero convertido guardado en arreglo
		num_b[a]=aux%2;
		aux=aux/2;
	}
	
	int *num_bn;
	num_bn = (int*)malloc(sizeof(int)*i);
	aux=num_O;
	for(a=i;a>=0;a--){		//inversion
		if(num_b[a]==1)
			num_bn[a]=0;
		if(num_b[a]==0)
			num_bn[a]=1;
			
	}
		
	aux=num_O;
	for(a=0;a<=i;a++){		//suma 1
		if(a==0){
			if(num_bn[a]==1){
				num_bn[a]=0;
			}
			else{
				num_bn[a]=1;
			}
		}
		if(num_bn[a]==1){
			num_bn[a]=0;
		}
		else{
			num_bn[a]=1;
		}
		
	}
	
	aux=num_O;
	printf("Binario Positivo: ");
	for(a=i;a>=0;a--){
		printf("%d",num_b[a]);
	}
	
	aux=num_O;
	printf("\nBinario Negativo: ");
	for(a=i;a>=0;a--){
		printf("%d",num_bn[a]);
	}
	
	
}

int fraccion(){
	
}

int main(void){
	int x;
	printf("Bienvenido, por favor escoja la operacion que desea realizar. \n1)Conversion de base numérica decimal - binario - hexadecimal. \n2)Conversion positivo-negativo en complemento a 2. \n3)Representacion de numero fraccionario en punto flotante.\n");
	scanf("%d",&x);
	
	switch(x){
		case 1: conversionDBH();
			break;
		case 2: conversionC2();
			break;
		case 3: fraccion();
			break;
	}
return 0;
}
