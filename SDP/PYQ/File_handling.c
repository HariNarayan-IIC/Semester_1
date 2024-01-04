//WAP to open a file name 'abc.txt' contains some text. Read content from 'abc.txt'
//and save its text in another file named “xyz.txt” in reverse.
// Input: This is practical of software design & programming
// Output: programming & design software of practical is This

#include <stdio.h>

FILE *fptr1, *fptr2;

void reverse(){
    char myString[100];
    if (fscanf(fptr1, "%s", myString)!= 1){
        return;
    }
    reverse();
    fprintf(fptr2,"%s ", myString);
}

int main(){
    fptr1= fopen("abc.txt", "r");
    if (fptr1== NULL){
        printf("File does not exist!!");
        return 1;
    }
    fptr2= fopen("xyz.txt", "w");
    
    reverse();
    
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}