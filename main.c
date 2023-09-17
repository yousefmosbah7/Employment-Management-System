#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "STD_TYPES.h"
#include "functions.h"
struct my_employee{
uint32 id;
uint8 *first_name[20];
uint8 *sur_name[20];
uint8 gender;
uint32 arr[3];
uint32 age;
uint32 phone_number;
uint32 net_salary;
uint32 deductions;
uint32 tasks;
uint32 bonus;
uint32 overtime;
};
extern uint32 employee_count;
int main(){
    struct my_employee employee[100];
    printf("\n*********Employee Management System*********\n\n");
    sint32 option;
    do{
    printf("1 - Add Employee\n\n");
    printf("2 - List of Employees\n\n");
    printf("3 - Find an employee with his first name\n\n");
    printf("4 - Find an employee with his id number\n\n");
    printf("5 - Delete an employee\n\n");
    printf("6 - Financial services\n\n");
    printf("7 - Quite\n\n");
    printf("Choose between options: ");
    while (scanf("%d", &option) != 1) {
    while (getchar() != '\n');
    printf("\nInvalid input. Please enter an integer: ");
}
    printf("\n");
    if(option==1){
     add_employee(employee);
    }else if(option==2){
        if(employee_count==0){
            printf("-------------------------\n");
            printf("There is no employees yet\n");
            printf("-------------------------\n\n");
        }else{
            display_employees(employee);
        }
    }
    else if(option==3){
        if(employee_count==0){
            printf("-------------------------\n");
            printf("There is no employees yet\n");
            printf("-------------------------\n\n");
        }else{
            uint8 array[20];
            printf("\nEnter the first name of the employee you want to search about: ");
            scanf("%s",array);
            search_employeefirstname(employee,array);
        }
    }
    else if(option==4){
        if(employee_count==0){
            printf("-------------------------\n");
            printf("There is no employees yet\n");
            printf("-------------------------\n\n");
        }else{
            uint32 num_id;
            printf("\nEnter the id of the employee you want to search about: ");
            scanf("%d",&num_id);
            search_employeeid(employee,num_id);
        }
    }
    else if(option==5){
        if(employee_count==0){
            printf("-------------------------\n");
            printf("There is no employees yet\n");
            printf("-------------------------\n\n");
        }else{
            uint32 num_id;
            printf("\nEnter the id of the employee you want to search about: ");
            while (scanf("%d", &num_id) != 1) {
            while (getchar() != '\n');
            printf("\nInvalid input. Please enter an integer: ");
            }
            search_employeeid(employee,num_id);
        }
    }
    else if(option==6){
        if(employee_count==0){
            printf("-------------------------\n");
            printf("There is no employees yet\n");
            printf("-------------------------\n\n");
        }else{
            uint32 num_id;
            printf("Enter the id of the employee you want to check his financial details: ");
            scanf("%d",&num_id);
            financial(employee,num_id);
        }
    }
}
while(option!=7);
printf("Thank you for using our system\n");
}
