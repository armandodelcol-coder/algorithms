def selection_sort(my_list):
    for i in range(len(my_list) - 1):
        smallest_index = i
        for j in range(i+1, len(my_list)):
            if my_list[j] < my_list[smallest_index]:
                smallest_index = j
        current_element = my_list[i]
        smallest_element = my_list[smallest_index]
        my_list[i] = smallest_element
        my_list[smallest_index] = current_element

if __name__ == "__main__":
    print("Let's Do It")
    my_list = [7,4,15,1,8,21,28,17,10,20,33,25]
    selection_sort(my_list)
    print(my_list)
