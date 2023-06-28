// Watch This... https://www.youtube.com/watch?v=3j0SWDX4AtU
#include <stdio.h>

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

void merge_sort(int array[], int length_of_array) {
    if (length_of_array > 1) {
        puts("Sorting...");
        print_array_elements(array, length_of_array);
        int mid = length_of_array/2;
        printf("Mid is equals %d\n", mid);
        int left_array[mid];
        for (int i = 0; i < mid; i++) {
            left_array[i] = array[i];
        }
        int rigth_array[length_of_array - mid];
        int rigth_array_i = mid;
        for (int j = 0; j < length_of_array - mid; j++) {
            rigth_array[j] = array[rigth_array_i];
            rigth_array_i = rigth_array_i + 1;

        }
        size_t length_of_left_array = sizeof(left_array)/sizeof(left_array[0]);
        printf("Length of left_array is %ld\n", length_of_left_array);
        print_array_elements(left_array, length_of_left_array);
        size_t length_of_rigth_array = sizeof(rigth_array)/sizeof(rigth_array[0]);
        printf("Length of right_array is %ld\n", length_of_rigth_array);
        print_array_elements(rigth_array, length_of_rigth_array);
        merge_sort(left_array, length_of_left_array);
        merge_sort(rigth_array, length_of_rigth_array);
        // Now, I need to Merge because the logic of divide-by-couquer is prepared
        int left_i = 0, right_i = 0, main_i = 0;
        while (left_i < length_of_left_array && right_i < length_of_rigth_array) {
            if (left_array[left_i] <= rigth_array[right_i]) {
                array[main_i] = left_array[left_i];
                left_i = left_i + 1;
            } else {
                array[main_i] = rigth_array[right_i];
                right_i = right_i + 1;
            }
            main_i = main_i + 1;
        }
        while (left_i < length_of_left_array) {
            array[main_i] = left_array[left_i];
            left_i++;
            main_i++;
        }
        while (right_i < length_of_rigth_array) {
            array[main_i] = rigth_array[right_i];
            right_i++;
            main_i++;
        }
        puts("Merged:");
        print_array_elements(array, main_i);
    }
}

int main() {
    int my_array[9] = {7, 20, 1, 5, 3, 8, 10, 2, 17};
    size_t length_of_array = sizeof(my_array)/sizeof(my_array[0]);
    printf("Length of main array is %ld\n", length_of_array);
    merge_sort(my_array, length_of_array);
    puts("Final array...");
    print_array_elements(my_array, length_of_array);
    return 0;
}