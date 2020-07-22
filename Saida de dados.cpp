#include<stdio.h>
#include<string.h>

int main(){
	int idade ;
	double salario ,altura;
	char genero ;
	char nome [50];
	
	idade = 18;
	salario = 4600.9;
	altura = 1.75;
	genero = 'M';
	strcpy (nome, "Guilherme");
	 
	 printf("O funcionario %s,sexo %c , ganhar %.2f e tem %d anos \n",nome , genero , salario,idade);
	 
	 return 0 ;

	
}

