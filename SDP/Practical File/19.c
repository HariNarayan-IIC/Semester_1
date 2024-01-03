// WAP to create a structure named company which has name, phone, and no_of_employee as
// member variables. Create other structure named address and store address of company like
// plot no, city, state including pin name. Read name of company, its address, phone, and
// no_of_employee for at least 3 companies using an array. Display data of each company.
// Make appropriate assumptions to run the program.

#include <stdio.h>

// Structure for company information
struct address {
    char plotNo[50];
    char city[50];
    char state[50];
    char pin[10];
};

// Structure for company information
struct company {
    char name[50];
    char phone[15];
    int no_of_employees;
    struct address company_address;  // Nested structure for address
};

int main() {
    // Assume a maximum of 3 companies
    struct company companies[3];

    // Input data for each company
    for (int i = 0; i < 3; ++i) {
        printf("Enter details for Company %d:\n", i + 1);

        // Company name
        printf("Name: ");
        scanf("%s", companies[i].name);

        // Company phone
        printf("Phone: ");
        scanf("%s", companies[i].phone);

        // Number of employees
        printf("Number of Employees: ");
        scanf("%d", &companies[i].no_of_employees);

        // Company address
        printf("Address:\n");
        printf("Plot No: ");
        scanf("%s", companies[i].company_address.plotNo);
        printf("City: ");
        scanf("%s", companies[i].company_address.city);
        printf("State: ");
        scanf("%s", companies[i].company_address.state);
        printf("PIN: ");
        scanf("%s", companies[i].company_address.pin);
    }

    // Display data for each company
    printf("\nCompany Details:\n");
    for (int i = 0; i < 3; ++i) {
        printf("Company %d:\n", i + 1);
        printf("Name: %s\n", companies[i].name);
        printf("Phone: %s\n", companies[i].phone);
        printf("Number of Employees: %d\n", companies[i].no_of_employees);
        printf("Address: %s, %s, %s - %s\n",
               companies[i].company_address.plotNo,
               companies[i].company_address.city,
               companies[i].company_address.state,
               companies[i].company_address.pin);
        printf("\n");
    }

    return 0;
}
