#include <iostream>

//9. Faça um programa que receba uma palavra e a imprima de tr ´as-para-frente.

int main(int argc, char** argv) {
	char str[50];
	int i=0,j=0;
	
	printf("insira a string:\n");
	gets(str);
	
	while(str[i] != '\0'){
		i++;
	}
	
	for(j=i;j>=0;j--){
	
	printf("%c",str[j]);
}
	return 0;
}