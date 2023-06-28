def insertion_sort(array: list) -> None:
    for i in range(1, len(array)):
        key = array[i]
        j = i - 1
        while j > -1 and array[j] > key:
            array[j + 1] = array[j]
            j = j - 1
        array[j + 1] = key

if __name__ == "__main__":
    array = [4, 1, 7, 14, 8, 21, 17]
    insertion_sort(array)
    print(array)
