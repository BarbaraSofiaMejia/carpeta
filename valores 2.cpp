#include<iostream>
int main (){
	int num,acum=0,cont=0;
	std::cout <<"ingrese el valor \n";
	std::cin>>num ;
	while (num!=0){
		acum+=num;
		cont++;
		std::cout <<"ingrese numero ";
		std::cin>>num;
	}
	std::cout <<"ingresaste "<<cont<<" numeros ";
	std::cout <<"la suma total de "<<acum<<std::endl;
	return 0;
	
}
