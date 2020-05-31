#include <stdlib.h>
#include <math.h>
#include <stdio.h>


float calculov(float tiempo, float distancia);
void promedio(int numeros);
float calculor();
float conversion();

float distancia=0, tiempo=0, velocidad=0;
int i=0, prome=0;

int main(){
	
	int opc, numeros=0;
	float distancia=0, tiempo=0;
	
	do{
	printf("=====Menu=====\n");
	printf("1. Calculo de velocidad\n");
	printf("2. Promedio de numeros enteros\n");
	printf("3. Calculo del radio de un circulo\n");
	printf("4. Conversion de libras a pesos\n");
	printf("5. Salir\n");
	printf("=====================================\n");
	printf("Que opcion deseas elegir?\n");
	scanf("%i", &opc);
	system("cls");
	
	switch(opc){
		case 1:
			printf("Calculo de velocidad\n");
			printf("Ingresa la distancia que recorriste (metros)\n");
			scanf("%f", &distancia);
			printf("Ingresa el tiempo en que lo recorriste (minutos)\n");
			scanf("%f", &tiempo);
			
			printf("La velocidad es %.2f metros por minuto\n", calculov(tiempo,distancia));
			system("pause");
			system("cls");
			break;
		case 2:
			printf("Promedio de numeros enteros\n");
		    printf("Cuantos numeros deseas ingresar?\n");
			scanf("%i", &numeros);
			
			
			promedio(numeros);
			
			system("pause");
			system("cls");
			break;
		case 3:
			printf("Calculo del radio de un circulo\n");
			printf("El radio del circulo es %.2f\n", calculor());
			
			system("pause");
				system("cls");
			break;
		case 4:
			printf("Conversion de libras a pesos\n");
			
		    conversion();
			system("pause");
				system("cls");
			break;
		case 5:
			printf("Saliste del programa\n");
			break;
		default:
			printf("Esa opcion no es valida");
	}
}while(opc!=5);
	return 0;
}


float calculov(float tiempo, float distancia){
	

	if(distancia>=10 && tiempo>=10){
	velocidad=distancia/tiempo;
    }else{
    	printf("No se puede hacer el calculo\n");
	}	
	
}

void promedio(int numeros){
	
	int x[numeros];
	
    if(numeros>=5){
		for(i=1; i<=numeros; i++){
			printf("Ingresa el numero: ");
			scanf("%i", &x[i]);
			prome=prome+x[i];
		}
	
	prome=prome/numeros;
	
	printf("El promedio es %i \n", prome);
    }else{
	printf("La cantidad de numeros tiene que ser mayor a 5\n");
 // }while(numeros<5);

}
}
float calculor(){
	float perimetro=0, radio=0;
	
	printf("Ingresa el perimetro del circulo\n");
	scanf("%f", &perimetro);
	radio=perimetro/6.28;
	
	return radio;
	
}

float conversion(){
	
	float libras=0, pesos=0;
	
	do{
	printf("Ingresa la cantidad de libras que quieres convertir\n");
	scanf("%f", &libras);
	if(libras>=100){
		pesos=libras*27.65;
		
		printf("%.2f libras, seria igual a $%.2f\n", libras, pesos);
		
	}else{
		printf("La cantidad de libras tiene que ser mayor a 100\n");
	}
}while(libras<100);
}
