#include <stdio.h>
int main (){
int num,num1,num2,rest;

printf("1 Suma\n");
printf("2 Resta\n");
printf("3 Multiplicacion\n");
printf("4 Division\n");
printf("Ingresa una operacion:\n");
scanf("%d",&num);

switch (num) {
	case 1: 
    printf("Dame el primer valor: ");
    scanf("%i", &num1);
    printf("Dame el segundo valor: ");
    scanf("%i", &num2);
    rest=num1+num2;
    printf("El resultado es: ");
    printf("%i",rest);
break;
case 2: printf("Dame el primer valor: ");
    scanf("%i", &num1);
    printf("Dame el segundo valor: ");
    scanf("%i", &num2);
    rest=num1-num2;
    printf("El resultado es: ");
    printf("%i",rest);
break;
case 3:
    printf("Dame el primer valor: ");
    scanf("%i", &num1);
    printf("Dame el segundo valor: ");
    scanf("%i", &num2);
    rest=num1*num2;
    printf("El resultado es: ");
    printf("%i",rest);
break;
case 4: printf("Dame el primer valor: ");
    scanf("%i", &num1);
    printf("Dame el segundo valor: ");
    scanf("%i", &num2);
    rest=num1/num2;
    printf("El resultado es: ");
    printf("%i",rest);

break;
}
return 0;


}
