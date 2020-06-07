#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void promedio(int *vendedor1, int *vendedor2, int *vendedor3, float *resultado1, float *resultado2, float *resultado3);
void mayor(int *vendedor1, int *vendedor2, int *vendedor3, int *dia1, int *dia2, int *dia3);
void sueldo();

int main(){
	
	int vendedor1[7], vendedor2[7], vendedor3[7], dia1=0, dia2=0, dia3=0, sueldo1=0, sueldo2=0, sueldo3=0;
	float  resultado1=0, resultado2=0, resultado3=0;
	
	printf("Ingresa las ventas que hizo el vendedor, por dia.\n");
	
	system("pause");
	system("cls");
	
    for(int i=1; i<4; i++){
    	printf("Vendedor %i\n", i);
    	for(int j=1; j<7; j++){
    		printf("%i° Dia:", j);
    		
    		if(i==1){
    			scanf("%i", &vendedor1[j]);
			}else if(i==2){
				scanf("%i", &vendedor2[j]);
			}else{
				scanf("%i", &vendedor3[j]);
			}
		}
	}
	
	promedio(vendedor1, vendedor2, vendedor3, &resultado1, &resultado2, &resultado3);
	
	
	system("pause");
	system("cls");
	
	printf("El promedio de ventas del primer vendedor es %.2f\n", resultado1);
	printf("El promedio de ventas del segundo vendedor es %.2f\n", resultado2);
	printf("El promedio de ventas del tercer vendedor es %.2f\n", resultado3);
	
	mayor(vendedor1, vendedor2, vendedor3, &dia1, &dia2, &dia3);
	
	system("pause");
	system("cls");
	
	int[3] vendedores = {dia1, dia2, dia3};

	for(int i = 0; i<3; i++){
		int current_vendedor = vendedores[i];
		printf("Vendedor ", i, "/n");
		switch(current_vendedor){
		case 1:
			printf("Lunes fue el dia de mayor venta\n");
			break;
		case 2:
			printf("Martes fue el dia de mayor venta\n");
			break;
		case 3:
			printf("Miercoles fue el dia de mayor venta\n");
			break;
		case 4:
			printf("Jueves fue el dia de mayor venta\n");
			break;
		case 5:
			printf("Viernes fue el dia de mayor venta\n");
			break;
		case 6:
			printf("Sabado fue el dia de mayor venta\n");
			break;
		}
	}

	system("pause");
	system("cls");
	
	if(resultado1>resultado2){
		if(resultado1>resultado3){
			printf("El que tuvo mayor cantidad de ventas fue el vendedor 1 con $%.2f de ventas\n", resultado1*6);
			sueldo1=(resultado1*6)*.02+1100;
			sueldo2=1080;
			sueldo3=1080;
		}else{
			printf("El que tuvo mayor cantidad de ventas fue el vendedor 3 con $%.2f de ventas\n", resultado3*6);
			sueldo3=(resultado3*6)*.02+1100;
			sueldo2=1080;
			sueldo1=1080;
		}
	}else{
		if(resultado2<resultado3){
			printf("El que tuvo mayor cantidad de ventas fue el vendedor 3 con $%.2f de ventas\n", resultado3*6);
			sueldo3=(resultado3*6)*.02+1100;
			sueldo2=1080;
			sueldo1=1080;
		}else{
			printf("El que tuvo mayor cantidad de ventas fue el vendedor 2 con $%.2f de ventas\n", resultado2*6);
            sueldo2=(resultado2*6)*.02+1100;
			sueldo1=1080;
			sueldo3=1080;		
		}
	}
	
	system("pause");
	system("cls");
	
	printf("El vendedor 1 tuvo $%.2f de venta\n", resultado1*6);
	printf("El vendedor 2 tuvo $%.2f de venta\n", resultado2*6);
	printf("El vendedor 3 tuvo $%.2f de venta\n", resultado3*6);
	
	system("pause");
	system("cls");
	
	printf("El salario del vendedor 1 es $%i\n", sueldo1);
	printf("El salario del vendedor 2 es $%i\n", sueldo2);
	printf("El salario del vendedor 3 es $%i\n", sueldo3);
	
	
	return 0;
}

void promedio(int *vendedor1, int *vendedor2, int *vendedor3, float *resultado1, float *resultado2, float *resultado3){
	
	for(int i=1; i<4; i++){
    	for(int j=1; j<7; j++){
    		
    		if(i==1){
    		*resultado1=*resultado1+*(vendedor1+j);	
			}else if(i==2){
			*resultado2=*resultado2+*(vendedor2+j);
			}else{
			*resultado3=*resultado3+*(vendedor3+j);
			}
		}
	}
	
	*resultado1=*resultado1/6;
	*resultado2=*resultado2/6;
	*resultado3=*resultado3/6;
}

void mayor(int *vendedor1, int *vendedor2, int *vendedor3, int *dia1, int *dia2, int *dia3){
	
	int mayor1=0, mayor2=0, mayor3=0;
	
	 for(int i=1; i<4; i++){
    	
    	for(int j=1; j<7; j++){
    		
    		if(i==1){
    			if(mayor1<*(vendedor1+j)){
    				mayor1=*(vendedor1+j);
    				*dia1=j;
				}
			}else if(i==2){
				if(mayor2<*(vendedor2+j)){
    				mayor2=*(vendedor2+j);
    				*dia2=j;
				}
			}else{
				if(mayor3<*(vendedor3+j)){
    				mayor3=*(vendedor3+j);
    				*dia3=j;
				}
			}
		}
	}	
}

