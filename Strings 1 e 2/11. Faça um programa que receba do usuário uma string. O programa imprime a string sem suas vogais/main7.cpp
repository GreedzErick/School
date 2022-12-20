#include <iostream>

//11. Faça um programa que receba do usuário uma string. O programa imprime a string sem
//suas vogais.

int main(int argc, char** argv) {
	char str[50];
	int i=0,j=0;
	
	printf("Insira a string:\n");
	gets(str);
	
	while(str[i] != '\0'){
		if(str[i] == 'a'|| str[i] == 'e'|| str[i] == 'i'||str[i] == 'o'||str[i] == 'u'||str[i] == 'A'|| str[i] == 'E'|| str[i] == 'I'||str[i] == 'O'||str[i] == 'U'){
			str[i] = 255;
		}
		i++;
	}
	
	printf("A string resultante eh:\n");
	puts(str);
	return 0;
}