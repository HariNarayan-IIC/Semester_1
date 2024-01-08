//Binary Search

#include <iostream>
using namespace std;

int binSearch(int* arr, int l, int r, int key){
    if (l> r){
        return -1;
    }
    int mid= (l+r)/2;
    if (key== arr[mid]) return mid;
    else if (key> arr[mid]) binSearch(arr, mid+1, r, key);
    else binSearch(arr, l, mid-1, key);
}

int main(){
    int arr[]= {1,3,5,7,9};
    cout<< binSearch(arr, 0, 4, 1)<< endl;
    return 0;
}