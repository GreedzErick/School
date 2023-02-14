#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Maior(int vet[], int n){
	int i, maior;
	
	for(i=0;i<n;i++){
		if(vet[i] > maior){
			maior = vet[i];
		}
	}
	return (maior);
}

int main(int argc, char** argv) {
	int vet[5], i;
	
	for(i=0;i<5;i++){
		printf("Insira um valor:\n");
		scanf("%d",&vet[i]);
	}
	printf("O maior valor eh: %d\n", Maior(vet, 5));
	
	system("Pause");
	
	return 0;
}
