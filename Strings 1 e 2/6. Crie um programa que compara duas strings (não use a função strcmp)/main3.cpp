#include <iostream>

//6. Crie um programa que compara duas strings (não use a função strcmp).

int main(int argc, char** argv) {
	char str[50], str1[50];
	int i=0,j=0;
	
	printf("Insira a string:\n");
	gets(str);
	printf("Insira outra string:\n");
	gets(str1);
	
	while(str[i] != '\0'){
		i++;
	}
	
	while(str1[j] != '\0'){
		j++;
	}
	
	if(i == j || j == i){
		printf("Ambas as strings tem o mesmo tamanho.");
	}
	if(i > j){
		printf("A string:\n");
		puts(str);
		printf("\teh a maior.");
	}
	if(j > i){
		printf("A string:\n");
		puts(str1);
		printf("eh a maior.");
	}
	return 0;
}