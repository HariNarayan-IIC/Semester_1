//Merge Sort

#include <stdio.h>
#include <stdlib.h>

void printArr(int *arr, int n){
    for (int i= 0; i< n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void merge(int * arr, int l, int r, int mid){
    int l_index= 0, r_index= 0, index= l;

    int l_size= mid- l +1;
    int r_size= r- mid;

    int* left= (int*)malloc(l_size*sizeof(int));
    int* right= (int*)malloc(r_size*sizeof(int));

    for (int i= 0; i < l_size; i++){
        left[i]= arr[l++];
    }

    for (int i= 0; i< r_size; i++){
        right[i]= arr[++mid];
    }

    while(l_index< l_size && r_index< r_size){
        if (left[l_index]< right[r_index]){
            arr[index++]= left[l_index++];
        }
        else{
            arr[index++]= right[r_index++];
        }
    }
    while(l_index< l_size){
        arr[index++]= left[l_index++];
    }
    while(r_index< r_size){
        arr[index++]= right[r_index++];
    }

    free(left);
    free(right);
}

void mergeSort(int *arr, int l, int r){
    if (l>=r){
        return;
    }

    int mid= (l+r)/2;

    mergeSort(arr, l, mid);
    mergeSort(arr, mid+1, r);

    merge(arr, l, r, mid);
}



int main(){
    int arr[]= {4, 5, 3, 2, 1};
    int n= 5;
    printArr(arr, n);
    mergeSort(arr, 0, n-1);
    printArr(arr, n);
    return 0;
}