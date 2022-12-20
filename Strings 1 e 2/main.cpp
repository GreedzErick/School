#include <iostream>

//5. Digite um nome, calcule e retorne quantas letras tem esse nome.
int main(int argc, char** argv) {
	char N[50];
	int i=0,j=0;
	
	printf("Insira a string:\n");
	gets(N); //Recebe a string digitada
	while(N[i] != '\0'){ //verifica até o momento em que a string acaba, identificado pelo caractere '\0' (Null)
		i++;//soma o contador para verificar o tamanho da string, usada tmb para dizer o comprimento da string
		if(N[i] == ' '){ // if para verificar espaços na string.
		j++;//variavel armazenadora da quantidade de espaços.
	}
	}
	printf("A string eh:\n");
	puts(N); //Imprime a string adquirida pelo gets
	printf("Possui [%d] caracteres!\n",i);
	printf("Possui [%d] espacos!\n",j);
	return 0;
}