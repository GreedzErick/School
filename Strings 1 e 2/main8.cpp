#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char str[50], j;
	int i=0;
	
	printf("Insira a string:\n");
	gets(str);
	printf("Insira a letra que substituira as vogais:\n");
	scanf("%c",&j);
	while(str[i] != '\0'){
		if(str[i] == 'a'|| str[i] == 'e'|| str[i] == 'i'||str[i] == 'o'||str[i] == 'u'||str[i] == 'A'|| str[i] == 'E'|| str[i] == 'I'||str[i] == 'O'||str[i] == 'U'){
		str[i] = j;
		}		
		i++;
	}
	
	printf("String resultante =\n");	
	puts(str);
	return 0;
}