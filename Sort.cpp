//
// Created by zrgam_000 on 9/20/2017.
//

void insertionSort(int* arr, int length){
    int j = 0;
    for(int i = 1; i < length; i++){
        int temp = arr[i];
        for(j = i-1; j > 0 && arr[j] > temp; j--){
            arr[j+1] = arr[j];
        }
        arr[j+1] = temp;
    }
}
int partition(int* arr, int start, int end){
    int pivot = arr[start];
    int i = start+1;
    int j = start+1;

    while(j < end){
        if(arr[j] < pivot){
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            i++;
        }

        j++;
    }
    arr[start] = arr[i-1];
    arr[i-1] = pivot;
    return i-1;
}

void qsRecursion(int* arr, int start, int end){
    if(start > end-1){
        return;
    }
    int pivot = partition(arr, start, end);
    qsRecursion(arr, start, pivot);
    qsRecursion(arr, pivot+1, end);
}



void quickSort(int* arr, int length){
    qsRecursion(arr, 0, length);
}

