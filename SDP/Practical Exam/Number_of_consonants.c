#include <stdio.h>

int main(){
    FILE *fptr;
    fptr= fopen("input.txt", "r");
    char ch= fgetc(fptr);
    int count=0;
    while (ch!= EOF){
        if (ch!= 'a' && ch!= 'e' && ch!= 'i' && ch!= 'o' && ch!= 'u'){
            count++;
        }
        ch= fgetc(fptr);
    }

    printf("No. of consonants in the file are: %d", count);
    fclose(fptr);

    return 0;
}