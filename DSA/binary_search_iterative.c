#include <stdio.h>

int binarySearch(int* arr, int n, int key){
    int l= 0;
    int r= n-1;
    int mid;

    while(l<=r){
        mid = (l+r)/2;

        if (arr[mid]== key)
            return mid;

        else if (key> arr[mid])
            l= mid+1;

        else
            r= mid-1;
    }
    return -1;
}

int main(){
    int arr[]= {2, 4, 6, 8, 10};
    int key= 15;
    int index= binarySearch(arr, 5, key);
    if (index< 0){
        printf("Element not found!!");
    }
    else{
        printf("%d found at %d", key, index);
    }
    return 0;
}