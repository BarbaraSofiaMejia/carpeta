#include <stdio.h>
int main(){
	int far,cel;
	printf("dame los grados farhenheit a convertirlo a grados celsius\n");
	scanf("%d", &far);
	cel=((far-32)*5)/9;
	printf("los grados celsius son %d\n",cel);
	return 0;
}
