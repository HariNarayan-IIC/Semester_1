//Write a structure to store the roll no., name, age (between 11 to 14) and address of 
//students (more than 10). Store the information of the students.
// 1 - Write a function to print the names of all the students having age 14.
// 2 - Write another function to print the names of all the students having even roll no.
// 3 - Write another function to display the details of the student whose roll no is given
// (i.e., roll no. entered by the user).

#include <stdio.h>
#include <string.h>

typedef struct address{
    int house_no;
    char colony[30];
    char city[20];
    int pincode;
}addr;

typedef struct student{
    int roll;
    char name[30];
    int age;
    addr address;
} student;

void name_14(student arr[], int size){
    printf("\nStudents with age= 14 are:\n");
    for (int i= 0; i< size; i++){
        if (arr[i].age== 14){
            printf("%s\n", arr[i].name);
        }
    }
} //function to print the names of all the students having age 14.

void name_even_roll(student arr[], int size){
    printf("\nStudents with even roll number are:\n");
    for (int i= 0; i< size; i++){
        if ((arr[i].roll % 2)== 0){
            printf("%s\n", arr[i].name);
        }
    }
} //function to print the names of all the students having even roll no.

void fetch_details(student arr[], int size, int roll){
    printf("Details of the student with roll number= %d is:\n", roll);
    for (int i=0; i< size; i++){
        if (arr[i].roll== roll){
            printf("Name= %s\nAge= %d\n", arr[i].name, arr[i].age);
            printf("Address= %d, %s, %s- %d\n", arr[i].address.house_no, arr[i].address.colony, arr[i].address.city, arr[i].address.pincode);
            return;
        }
    }
    printf("Roll no entered not found");
}

int main(){
    student arr[10];

    //Assigning value to 0th student
    arr[0].roll= 1;
    strcpy(arr[0].name,"Ram");
    arr[0].age= 12;
    arr[0].address.house_no= 234;
    strcpy(arr[0].address.colony, "Madhu Vihar");
    strcpy(arr[0].address.city, "Delhi");
    arr[0].address.pincode= 110032;

    //Assigning value to 1th student
    arr[1].roll= 2;
    strcpy(arr[1].name,"Shyam");
    arr[1].age= 13;
    arr[1].address.house_no= 23;
    strcpy(arr[1].address.colony, "Krishna Nagar");
    strcpy(arr[1].address.city, "Delhi");
    arr[1].address.pincode= 110042;

    //Assigning value to 2th student
    arr[2].roll= 3;
    strcpy(arr[2].name,"Megha");
    arr[2].age= 11;
    arr[2].address.house_no= 542;
    strcpy(arr[2].address.colony, "Pkt-C, Mayur Vihar");
    strcpy(arr[2].address.city, "Delhi");
    arr[2].address.pincode= 110091;

    //Assigning value to 3th student
    arr[3].roll= 4;
    strcpy(arr[3].name,"Karna");
    arr[3].age= 12;
    arr[3].address.house_no= 921;
    strcpy(arr[3].address.colony, "Munirka");
    strcpy(arr[3].address.city, "Delhi");
    arr[3].address.pincode= 110012;

    //Assigning value to 4th student
    arr[4].roll= 5;
    strcpy(arr[4].name,"Bengali");
    arr[4].age= 14;
    arr[4].address.house_no= 34;
    strcpy(arr[4].address.colony, "Paschim Vihar");
    strcpy(arr[4].address.city, "Delhi");
    arr[4].address.pincode= 110038;

    //Assigning value to 5th student
    arr[5].roll= 6;
    strcpy(arr[5].name,"Ganesh");
    arr[5].age= 13;
    arr[5].address.house_no= 77;
    strcpy(arr[5].address.colony, "Kidwai Nagar");
    strcpy(arr[5].address.city, "Delhi");
    arr[5].address.pincode= 110002;

    //Assigning value to 6th student
    arr[6].roll= 7;
    strcpy(arr[6].name,"Pallab Sikdar");
    arr[6].age= 12;
    arr[6].address.house_no= 116;
    strcpy(arr[6].address.colony, "Lodhi Colony");
    strcpy(arr[6].address.city, "Delhi");
    arr[6].address.pincode= 110003;

    //Assigning value to 7th student
    arr[7].roll= 8;
    strcpy(arr[7].name,"Manish Yadav");
    arr[7].age= 11;
    arr[7].address.house_no= 999;
    strcpy(arr[7].address.colony, "Badarpur");
    strcpy(arr[7].address.city, "Delhi");
    arr[7].address.pincode= 110079;

    //Assigning value to 8th student
    arr[8].roll= 9;
    strcpy(arr[8].name,"Kamla");
    arr[8].age= 12;
    arr[8].address.house_no= 234;
    strcpy(arr[8].address.colony, "Kamla Nagar");
    strcpy(arr[8].address.city, "Delhi");
    arr[8].address.pincode= 110020;

    //Assigning value to 9th student
    arr[9].roll= 10;
    strcpy(arr[9].name,"Pranav");
    arr[9].age= 14;
    arr[9].address.house_no= 1224;
    strcpy(arr[9].address.colony, "Chandni Chawk");
    strcpy(arr[9].address.city, "Delhi");
    arr[9].address.pincode= 110001;

    name_14(arr, 10);
    name_even_roll(arr, 10);

    int roll;
    printf("\nEnter roll number to find details: ");
    scanf("%d", &roll);
    fetch_details(arr, 10, roll);

    return 0;
}