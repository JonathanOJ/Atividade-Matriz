#include <stdio.h>
int main(){
	int n=0, i=0, j=0, tamVetor=0;
	scanf("%d", &n);	
	int auxVetor=0;
	tamVetor = n*n;
	auxVetor = tamVetor;
    int	matriz[n][n];
    int elemOriginal[tamVetor];
	
	for(i=0; i<n ;i++){
		for(j=0; j<n ;j++){
			scanf("%d", &matriz[i][j]);
			elemOriginal[auxVetor-1] = matriz[i][j];
			auxVetor--;
		}
	}
	printf("Matriz:\n");
	for(i=0; i<n ;i++){
		for(j=0; j<n ;j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");	
	}

	int	elem2[2];
	int menorElem=1000;
	
	for(i=0; i<n ;i++){
		for(j=0; j<n ;j++){
			if(matriz[i][j] < menorElem){
				menorElem = matriz[i][j];
				elem2[0] = i;
				elem2[1] = j;
			}
		}
	}	
	printf("Posicao de menor elemento na matriz: M[%d][%d]\n", elem2[0], elem2[1]);
	
	for(i=0; i<tamVetor; i++){
		printf("%d ", elemOriginal[i]);
	}
	
	menorElem=1000;
	int memoriaVetor=0;
	for(i=0; i<tamVetor; i++){
		if(elemOriginal[i]<menorElem){
			menorElem = elemOriginal[i];
			memoriaVetor = i;
		}
	}
	printf("\nPosicao do menor elemento do vetor: V[%d]", memoriaVetor);

}

