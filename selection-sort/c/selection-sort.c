#include <stdio.h>
#include <stdbool.h>


void selection_sort(int* array) {
    for (int i=0; i<11; i++) {
        int smallest_index = i;
        for (int j=i+1; j<12; j++) {
            if (array[j] < array[smallest_index]) {
                smallest_index = j;
            }
        }
        int current_element = array[i];
        int smallest_element = array[smallest_index];
        array[i] = smallest_element;
        array[smallest_index] = current_element;
    }
}

void print_array_elements(int* array) {
    printf("[");
    for (int i=0; i<12; i++) {
        if (i == 11) {
            printf("%d", array[i]);    
        } else {
            printf("%d, ", array[i]);
        }
    }
    printf("]\n");
}

bool check_is_sorted(int* array) {
    for (int i=0; i<11; i++) {
        if (array[i] > array[i+1]) {
            break;
        }
        return true;
    }
    return false;
}

int main() {
    puts("Welcome to Selection Sort Algorith!");
    //int array[12] = {7,4,15,1,8,21,28,17,10,20,33,25};
    int array[12] = {1, 4, 7, 8, 10, 15, 17, 20, 21, 25, 28, 33};
    bool first_check = check_is_sorted(array);
    printf("Array is already sorted? %d\n", first_check);
    if (first_check != true) {
        selection_sort(array);
        bool second_check = check_is_sorted(array);
        printf("Array is sorted? %d\n", second_check);
    }
    print_array_elements(array);
    return 0;
}