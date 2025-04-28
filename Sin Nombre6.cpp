#include <stdio.h>
int main(){
	int eur,dol,lib,eur1;
	printf("dame la cantidad de euros a convertir a dolares\n");
	scanf("%d",&eur);
	dol=eur*1.08;
	printf("dame la cantidad de libras a convertir a euros \n");
	scanf("%d",&lib);
	eur1=lib*1.20;
	printf(" los euros covertios a dolares son %d\n",dol);
		printf(" las libras covertios a euros son %d\n",eur1);
		return 0;
}

