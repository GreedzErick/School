#include <iostream>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int Rand(int vet[], int n){
	int i;
	for(i=0;i<5;i++){
		if(vet[i] == 0){
			srand(time(NULL));
		}
	}
}





int main(int argc, char** argv) {
	int vet[5],i;
	
	for(i=0;i<5;i++){
		printf("Insira o valor: \n");
		scanf("%d", &vet[i]);
	}
	
	printf("Os valores do vetor são: %d %d %d %d %d", Rand(vet,5));
	
	
	return 0;
}
