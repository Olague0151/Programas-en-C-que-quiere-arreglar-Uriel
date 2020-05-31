#include <stdlib.h>
#include <math.h>
#include <stdio.h>


void calculov(float *tiempo, float *distancia, float *resultado);
void promedio(int *numeros, float *resultado);
void calculor(float *perimetro, float *resultado);
void conversion(float *libras, float *resultado);


int main(){
	
    float distancia=0, tiempo=0, velocidad=0, resultado=0, perimetro=0, libras=0;
    int i=0, prome=0;
	int opc, numeros=0;
	
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
			printf("Ingresa el tiempo en que lo recorriste (segundos)\n");
			scanf("%f", &tiempo);
			
			calculov(&tiempo, &distancia, &resultado);
			
			printf("La velocidad es %.2f metros por segundo\n", resultado);
			system("pause");
			system("cls");
			break;
		case 2:
			printf("Promedio de numeros enteros\n");
		    printf("Cuantos numeros deseas ingresar?\n");
			scanf("%i", &numeros);
			
			
			promedio(&numeros,&resultado);
			
			printf("El promedio es %.2f\n", resultado);
			
			system("pause");
			system("cls");
			break;
		case 3:
			printf("Calculo del radio de un circulo\n");
			printf("Ingresa el perimetro del circulo\n");
	        scanf("%f", &perimetro);
	        
			calculor(&perimetro,&resultado);
			
			printf("El radio del circulo es %.2f\n", resultado);
			
			system("pause");
				system("cls");
			break;
		case 4:
			printf("Conversion de libras a pesos\n");
			printf("Ingresa la cantidad de libras que quieres convertir\n");
	        scanf("%f", &libras);
        
			
		    conversion(&libras, &resultado);
		    
		    printf("%.2f libras, seria igual a $%.2f\n", libras, resultado);
		    
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


void calculov(float *tiempo, float *distancia, float *resultado){
	

	if(*distancia>=10 && *tiempo>=10){
	*resultado=*distancia / *tiempo;
    }else{
    	printf("No se puede hacer el calculo\n");
	}	
	
}

void promedio(int *numeros, float *resultado){
	
	int x[*numeros], i=0;
	float prome=0;
	
    if(*numeros>=5){
		for(i=1; i<=*numeros; i++){
			printf("Ingresa el numero: ");
			scanf("%i", &x[i]);
			prome=prome+x[i];
		}
	
	*resultado= prome / *numeros;
	 
    }else{
	printf("La cantidad de numeros tiene que ser mayor a 5\n");
 // }while(numeros<5);
}
}

void calculor(float *perimetro, float *resultado){
	
	*resultado=*perimetro/6.28;
	
}

void conversion(float *libras, float *resultado){
	
	if(*libras>=100){
		*resultado=*libras*27.65;	
	}else{
		printf("La cantidad de libras tiene que ser mayor a 100\n");
	}

}
