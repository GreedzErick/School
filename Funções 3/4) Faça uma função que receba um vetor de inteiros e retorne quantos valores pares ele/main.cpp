#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int par( int vet[], int n){
	
	int i = 0, j=0;
	
	for(i=0;i<n; i++){
		if (vet[i] % 2 == 0){
			j++;
		}
	}
	return (j);
}


int main(int argc, char** argv) {
	
	int Vet[5], i;
	
	for(i=0;i<5;i++){
		
		printf("Insira um valor:\n");
		scanf("%d",&Vet[i]);
		
	}
	
	printf("A quantidad de numeros pares eh: %d\n", par(Vet,5));
	return 0;
}
