#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


float media(float vet[], int n){
	float media, s=0;
	int i;
	
	for(i=0;i<5;i++){
		s = s + vet[i];
	}
	media = s / 5;
	
	return (media);
}


int main(int argc, char** argv) {
	float vet[5];
	int i;
	
	for(i=0;i<5;i++){
		printf("Insira o valor: \n");
		scanf("%f",&vet[i]);
	}
	printf("A media eh de: %.2f\n",media(vet,5));
	system("Pause");

	return 0;
}
