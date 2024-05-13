#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, chave, j;
    for (i = 1; i < n; i++) { 	//O loop for percorre o array a partir do segundo elemento (i = 1), já que o primeiro elemento é considerado "ordenado" por padrão.
        chave = arr[i];			//chave armazena temporariamente o valor do elemento atual que está sendo considerado para inserção.
        printf ("Chave: %i \n", chave);
        j = i - 1;				//j é inicializado como o índice do elemento imediatamente anterior ao elemento atual.
        printf ("I: %i \n", i);
		printf ("J: %i \n", j);

        // Move os elementos do arr[0..i-1] que são maiores que a chave para uma posição à frente da sua posição atual
        while (j >= 0 && arr[j] > chave) {
            arr[j + 1] = arr[j];	//O elemento na posição j é movido para a posição j + 1.
            j = j - 1;
            printf ("Posição J novo: %i \n", arr[j]);
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
    int n = sizeof(arr) / sizeof(arr[0]); //calcula o tamnho do array, nesse caso, 5. a divisão retorna quantas vezes o tamanho de arr[0] cabe em arr
	//printf("%i", n);
	insertionSort(arr, n);
    printf("Array ordenado: \n");
    imprimirArray(arr, n);

    return 0;
}

