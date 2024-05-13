#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, chave, j;
    for (i = 1; i < n; i++) { 	//O loop for percorre o array a partir do segundo elemento (i = 1), j� que o primeiro elemento � considerado "ordenado" por padr�o.
        chave = arr[i];			//chave armazena temporariamente o valor do elemento atual que est� sendo considerado para inser��o.
        printf ("Chave: %i \n", chave);
        j = i - 1;				//j � inicializado como o �ndice do elemento imediatamente anterior ao elemento atual.
        printf ("I: %i \n", i);
		printf ("J: %i \n", j);

        // Move os elementos do arr[0..i-1] que s�o maiores que a chave para uma posi��o � frente da sua posi��o atual
        while (j >= 0 && arr[j] > chave) {
            arr[j + 1] = arr[j];	//O elemento na posi��o j � movido para a posi��o j + 1.
            j = j - 1;
            printf ("Posi��o J novo: %i \n", arr[j]);
        }
        arr[j + 1] = chave;
    }
}

void imprimirArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {12, 11, 13, 4, 6};
    //printf("%i \n", sizeof(arr));
    int n = sizeof(arr) / sizeof(arr[0]); //calcula o tamnho do array, nesse caso, 5. a divis�o retorna quantas vezes o tamanho de arr[0] cabe em arr
	//printf("%i", n);
	insertionSort(arr, n);
    printf("Array ordenado: \n");
    imprimirArray(arr, n);

    return 0;
}

