#include <iostream>

//7. Faça um programa que conte o número de 1’s que aparecem em um string. Exemplo:
 //“0011001” -> 3

int main(int argc, char** argv) {
	char str[50];
	int i=0,j=0;
	
	printf("Insira string de numero:\n");
	gets(str);
	
	while(str[i] != '\0'){
		
		if(str[i] == '1'){
			j++;
		}
	i++;
	}
	
	printf("A string inserida foi: \n");
	puts(str);
	printf("Ela possui %d,1s",j);
	return 0;
}