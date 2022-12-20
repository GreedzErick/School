#include <iostream>

//Escreva um programa que substitui as ocorrências de um caractere ‘0’ em uma string
//por outro caractere ‘1’.


int main(int argc, char** argv) {
	char str[50];
	int i=0,j;
	
	printf("Insira a string:\n");
	gets(str);
	
	while(str[i] != '\0'){
		if(str[i] == '0'){
			str[i] = '1';
		}
		i++;
	}
	
	printf("A string resultante eh:\n");
	puts(str);
	return 0;
}
