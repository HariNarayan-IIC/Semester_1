//Merge Sort practice

#include <iostream>
using namespace std;

void merge(int* left, int l1, int* right, int l2, int* arr){
    int i= 0;
    int l= 0;
    int r= 0;
    while(r< l2 && l< l1){
        if (left[l]<= right[r]){
            arr[i++]= left[l++];
        }
        else{
            arr[i++]= right[r++];
        }
    }
    while(l<l1){
        arr[i++]= left[l++];
    }
    while(r<l2){
        arr[i++]= right[r++];
    }
}

void mergeSort(int *arr, int l, int r){
    if (l>= r){
        return;
    }

    int mid= (l+r)/2;

    int len1= mid- l +1;
    int len2= r- mid;
    
    int* left= new int[len1];
    int* right= new int[len2];

    for (int i= 0; i< len1; i++){
        left[i]= arr[l++];
    }
    for (int i= 0; i< len2; i++){
        right[i]= arr[++mid];
    }

    mergeSort(left, 0, len1-1);
    mergeSort(right, 0, len2-1);

    merge(left, len1, right, len2, arr);

    delete left;
    delete right;
}

void printArr(int* arr, int len){
    for (int i= 0; i< len; i++){
        cout<< arr[i]<< " ";
    }cout<< endl;
}

int main(){
    int arr[]= {5,4,3,2,1};
    printArr(arr, 5);
    mergeSort(arr, 0, 4);
    printArr(arr, 5);
    return 0;
}