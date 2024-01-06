#include <stdio.h>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<string, int> map;
    FILE *fptr;
    fptr= fopen("input.txt", "r");
    char myString[100];
    while(fscanf(fptr,"%s",myString)== 1){
        map[myString]++;
    }cout<< endl;
    unordered_map<string, int>::iterator itr;
    int max= 0;
    for(itr= map.begin(); itr != map.end(); itr++){
        cout<< itr->first<< ": "<< itr->second<< endl;
    }  
}