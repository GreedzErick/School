#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Fa�a uma fun��o �Troque�, que recebe duas vari�veis reais A e B e troca o valor delas
//(isto �, A recebe o valor de B e B recebe o valor de A).
int troca(int a, int b){
	int aux = a;
	a = b;
	b = aux;
	printf("\n");
	printf("Os valores foram invertidos e agora sao: a = %d e b = %d\n",a,b);
}
int main(int argc, char** argv) {
	int a,b;
	
	printf("Digite um valor:\n");
	scanf("%d",&a);
	
	printf ("Digite outro valor:\n");
	scanf("%d",&b);
	
	troca(a,b);
	system("pause");
	printf("Satisfeito com a fun��o?");
	
	return 0;
}
