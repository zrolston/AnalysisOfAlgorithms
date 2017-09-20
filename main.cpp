#include <iostream>
#include "Sort.cpp"

int main() {
    int len;
    std::cout << "Please enter the length of the array you would like to sort." << std::endl;
    std::cin >> len;

    std::cout << "Please enter the " << len << " elements" << std::endl;
    int* arr = new int[len];
    for(int i = 0; i < len; i++){
        std::cin >> arr[i];
    }

    //insertionSort(arr, len);
    quickSort(arr, len);

    std::cout << "Sorted: ";
    for(int i = 0; i < len; i++){
        std::cout << arr[i] << " ";
    }

    return 0;
}