#include <stdio.h>

int binarySearch(int* arr, int key, int l, int r){
    //Base condition
    if (l>r){
        return -1;
    }
    //Key is equal to mid
    int mid= (l+r)/2;
    if (arr[mid]== key){
        return mid;
    }
    //Key greater than mid
    else if (key> arr[mid]){
        return binarySearch(arr, key, mid+1, r);
    }
    //Key smaller than mid
    else{
        return binarySearch(arr, key, l, mid-1);
    }
}

int main(){
    int arr[]= {2, 4, 6, 7, 8};
    int key= 20;
    int index= binarySearch(arr, key, 0, 4);
    if (index<0){
        printf("Element not found!!");
    }
    else{
        printf("%d found at %d", key, index);
    }
    return 0;
}