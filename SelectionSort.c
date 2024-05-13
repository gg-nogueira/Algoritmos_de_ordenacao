#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        printf("Valor de i: %i\n", i);
        for (j = i+1; j < n; j++) {
        	printf("Valor de j: %i\n", j);
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
                //printf("Valor de min_idx: %i\n", min_idx);
            }
        }
        // Troca o elemento mínimo encontrado com o primeiro elemento não ordenado
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp; // essa troca é feita para que não se percam os valores. O menor valor vai para o índice menor e o valor que estava no índice menor anteriormente vai para o antigo índice do menor número
    }
}

void imprimirArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]); //tamanho do array

    selectionSort(arr, n);
    printf("Array ordenado: \n");
    imprimirArray(arr, n);

    return 0;
}

