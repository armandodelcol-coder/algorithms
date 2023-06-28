#include <stdio.h>

void insertion_sort_and_change(int* array, int lenght) {
    for (int i=1; i<lenght; i++) {
        int key = array[i];
        // Insert A[i] into the sorted subarray A[1:i-1]
        int j = i - 1;
        while (j > -1 && array[j] > key) {
            array[j+1] = array[j];
            j = j - 1;
        }
        array[j+1] = key;
    }
}

void print_array_elements(int array[], int size_of_array) {
    printf("[");
    for (int i=0; i<size_of_array; i++) {
        if (i == size_of_array-1) {
            printf("%d", array[i]);    
        } else {
            printf("%d, ", array[i]);
        }
    }
    printf("]\n");
}

int main() {
    int size_of_array = 0;
    puts("Welcome to the insertion-sort algorithm in C!");
    puts("Please, tell me the size of the array");
    scanf("%d", &size_of_array);
    int array[size_of_array];
    for (int i=0; i<size_of_array; i++) {
        int key = 0;
        printf("Please, tell me the number of position: %d\n", i);
        scanf("%d", &key);
        array[i] = key;
    }
    insertion_sort_and_change(array, size_of_array);
    print_array_elements(array, size_of_array);
    return 0;
}
