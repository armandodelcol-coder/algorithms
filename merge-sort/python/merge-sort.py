def merge_sort(alist):
    if len(alist) > 1:
        print("Splitting", alist)
        mid = len(alist) // 2
        left_splitted = alist[:mid]
        right_splitted = alist[mid:]

        merge_sort(left_splitted)
        merge_sort(right_splitted)

        merge(left_splitted, right_splitted, alist)


def merge(left_splitted: list, right_splitter: list, alist: list):
    pass


if __name__ == "__main__":
    alist = [54,26,93,17,77,31,44,55,20]
    merge_sort(alist)
    print(alist)