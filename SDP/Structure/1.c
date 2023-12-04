// Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100)
// using a structure named Marks having elements roll no., name,  chem_marks,
// math_marks and phy_marks. And then display the percentage of each student.

#include <stdio.h>

typedef struct Marks{
    int roll_no;
    char name[30];
    int chem_marks;
    int math_marks;
    int phy_marks;
}marks;
/*
//Method1
marks S1= {1, "Pandit Rama Krishna", 54, 75, 86};
marks S2= {2, "Rahul Mishra", 87, 92,97};
marks S3= {3, "Rohan Chaurasiya", 95, 77, 80};
marks S4= {4, "Harshita Kumari", 85, 85, 85};
marks S5= {5, "Nitin Kumar Yadav", 70, 75, 74};
int main(){
    
    printf("Percentage of %s is %d\n", S1.name, (S1.chem_marks+ S1.math_marks+ S1.phy_marks)/3);
    printf("Percentage of %s is %d\n", S2.name, (S2.chem_marks+ S2.math_marks+ S2.phy_marks)/3);
    printf("Percentage of %s is %d\n", S3.name, (S3.chem_marks+ S3.math_marks+ S3.phy_marks)/3);
    printf("Percentage of %s is %d\n", S4.name, (S4.chem_marks+ S4.math_marks+ S4.phy_marks)/3);
    printf("Percentage of %s is %d\n", S1.name, (S5.chem_marks+ S5.math_marks+ S5.phy_marks)/3);
    return 0;
}
*/

//Method2
int main(){
    marks arr[5];
    for(int i= 0; i< 5; i++){
        printf("Enter details of %dth student(roll, name, chem, math, phy marks): \n", i);
        scanf("%d %s %d %d %d", &arr[i].roll_no, &arr[i].name, &arr[i].chem_marks, &arr[i].math_marks, &arr[i].phy_marks);
    }

    for(int i=0; i<5; i++){
        printf("Percentage of %s is %d\n", arr[i].name, (arr[i].chem_marks+ arr[i].math_marks+ arr[i].phy_marks)/3);
    }
}