// Write a structure to store the name, account number and balance of customers (more than 10)
// and store their information.
// 1 - Write a function to print the names of all the customers having a balance of less than $200.
// 2 - Write a function to add $100 to the balance of all the customers having more than $1000 in
// their balance and then print the incremented value of their balance.

#include <stdio.h>
#include <string.h>

typedef struct bank_account{
    char name[30];
    int account_no;
    long long int balance;
}account;

account client[10]= {
    {"Harry", 123456, 20},
    {"Raju", 654321, 2035},
    {"Mohan", 983592, 924},
    {"Jagan", 386035, 2004},
    {"Rohan", 122001, 6442},
    {"Karthik", 530010, 70},
    {"Steve", 780202, 6000},
    {"Tanmay", 505554, 420},
    {"Dravid", 932456, 2345},
    {"Dejavu", 532109, 235}
    };


void lessThan200(){
    printf("\nClients with account balance less than 200 are:\n");
    for(int i=0; i< 10; i++){
        if (client[i].balance< 200){
            printf("%s\n", client[i].name);
        }
    }
} //function to print the names of all the customers having a balance of less than $200

void add100(){
    printf("\nClients with more than 1000 balance with their new balance are:\n");
    for (int i=0; i<10; i++){
        if (client[i].balance > 1000){
            client[i].balance+= 100;
            printf("Client name: %s,  New balance: %d\n", client[i].name, client[i].balance);
        }
    }
} /*function to add $100 to the balance of all the customers having more than $1000 in
 their balance and then print the incremented value of their balance*/


int main(){
    lessThan200();
    add100();
    return 0;
}