//escribir un programa del 1 y 7 dependiendo el dia q le teoca por ejemplo 1=lunes si esta afuera del 7 q marque error 
#include <stdio.h >
int main () { 
int dia;
printf("ingrese el numero (dia de la semana ):\n");
scanf("%i",&dia); 
 switch(dia){
	case 1 : 
	printf("lunes\n");
	break;
		case 2 : 
	printf("martes\n");
	break;
		case 3 : 
	printf("miercoles\n");
	break;
		case 4 : 
	printf("jueves\n");
	break;
		case 5 : 
	printf("viernes\n");
	break;
		case 6 : 
	printf("sabado\n");
	break;
		case7 : 
	printf("domingo\n");
	break;
	
	
}
 
}
