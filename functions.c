#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "STD_TYPES.h"
struct my_employee{
uint32 id;
uint8 *first_name[20];
uint8 *sur_name[20];
uint8 gender;
uint32 arr[3];
uint32 age;
sint32 phone_number;
sint32 net_salary;
uint32 deductions;
uint32 tasks;
uint32 bonus;
uint32 overtime;
};
uint32 employee_count=0;

sint32 Isalpha(const uint8 *arr){
sint32 flag;
for(sint32 i=0 ; arr[i] ; i++){
    if(!isalpha(arr[i])||arr[i]==' '){
        flag= 0;
        break;//not string
    }else{
    flag=1;
    }
}
return flag;
}

//==================================================

void add_employee(struct my_employee* emp){
        emp[employee_count].id=employee_count+1;
        do{
        printf("\nEnter employee first name: ");
        scanf("%s",emp[employee_count].first_name);
        if(!Isalpha(emp[employee_count].first_name)){
        printf("\n\"Employee first name must be string\"\n");
        }
        }
        while(Isalpha(emp[employee_count].first_name)!=1);
        do{
        printf("\nEnter employee surname: ");
        scanf("%s",emp[employee_count].sur_name);
        if(!Isalpha(emp[employee_count].sur_name)){
        printf("\n\"Employee sur name must be string\"\n");
        }
        }
        while(Isalpha(emp[employee_count].sur_name)!=1);
        do{
        printf("\nEnter employee gender[M/F]: ");
        scanf(" %c",&emp[employee_count].gender);
        if((emp[employee_count].gender!='F')&&(emp[employee_count].gender!='M')){
            printf("\nEmployee gender must be \'M\' or \'F\'\n");
        }
        }
        while((emp[employee_count].gender!='F')&&(emp[employee_count].gender!='M'));
        while(1) {
            printf("\nEnter employee day of birth: ");
            if(scanf("%d", &emp[employee_count].arr[0]) == 1 &&emp[employee_count].arr[0] >=1 && emp[employee_count].arr[0] <=31)
                break;
                printf("\nEmployee date of birth must be a positive integer less than or equal 31\n");
            }
        while(1) {
            printf("\nEnter employee month of birth: ");
            if(scanf("%d", &emp[employee_count].arr[1]) == 1 &&emp[employee_count].arr[1] >=1 && emp[employee_count].arr[1] <=12)
                break;
                printf("\nEmployee month of birth must be a positive integer less than or equal 12\n");
            }
        while(1) {
            printf("\nEnter employee year of birth: ");
            if(scanf("%d", &emp[employee_count].arr[2]) == 1 &&emp[employee_count].arr[2] >=1980 && emp[employee_count].arr[2] <=2000)
                break;
                printf("\nEmployee year of birth must be after 1980 before 2000\n");
            }
        emp[employee_count].age=2023-emp[employee_count].arr[2];
        while (1) {
        printf("\nEnter employee phone number: ");
        if(scanf("%d",&emp[employee_count].phone_number)==1 && emp[employee_count].phone_number > 0 )
            break;
        printf("\nEmployee net salary must be a positive integer\n");
        }
        while (1) {
        printf("\nEnter employee net salary:$ ");
        if(scanf("%d",&emp[employee_count].net_salary)==1 && emp[employee_count].net_salary > 0 )
            break;
        printf("\nEmployee net salary must be a positive integer\n");
        }
        employee_count++;
        printf("\n");
        printf("------------------------------------------------------------------------------\n\n");

}

//==================================================

void display_employees(struct my_employee* emp){
    for(uint32 i=0;i<employee_count;i++){
        printf("\n--------------------------------------\n");
        printf("information for employee with id (%d):\n",emp[i].id);
        printf("--------------------------------------\n\n");
        printf("Employee id: %d\n",emp[i].id);
        printf("Employee name: %s %s\n",emp[i].first_name,emp[i].sur_name);
        printf("Employee gender: %c\n",emp[i].gender);
        printf("Employee date of birth: %d / %d / %d\n",emp[i].arr[0],emp[i].arr[1],emp[i].arr[2]);
        printf("Employee age: %d\n",emp[i].age);
        printf("Employee phone number: %d\n",emp[i].phone_number);
        printf("Employee net salary: %d$\n",emp[i].net_salary);
        printf("-------------------------------------\n");
    }
        printf("\n");
        printf("------------------------------------------------------------------------------\n\n");
}

//==================================================

void search_employeefirstname(struct my_employee* emp,uint8 arr[]){
        uint8 flag=0;
    for(uint32 i=0;i<employee_count;i++){
        if(!(strcmp(arr,emp[i].first_name))){
        flag=1;
        printf("\n---------------------------------------------\n");
        printf("information for employee with id number (%d):\n",i+1);
        printf("-----------------------------------------------\n\n");
        printf("Employee id: %d\n",emp[i].id);
        printf("Employee name: %s %s\n",emp[i].first_name,emp[i].sur_name);
        printf("Employee gender: %c\n",emp[i].gender);
        printf("Employee date of birth: %d / %d / %d\n",emp[i].arr[0],emp[i].arr[1],emp[i].arr[2]);
        printf("Employee age: %d\n",emp[i].age);
        printf("Employee phone number: %d\n",emp[i].phone_number);
        printf("Employee net salary: %d$\n",emp[i].net_salary);
        printf("-------------------------------------\n");
        printf("\n");
        printf("------------------------------------------------------------------------------\n\n");

        }
    }
        if(flag==0){
        printf("\n-----------------------------------------------");
        printf("\nThere isn't an employee with this first name\n");
        printf("-----------------------------------------------\n\n");
        }
}

//==================================================

void search_employeeid(struct my_employee* emp,uint32 num){
        uint8 flag=0;
    for(uint32 i=0;i<employee_count;i++){
        if((num)==emp[i].id){
        flag=1;
        printf("\n---------------------------------------------\n");
        printf("information for employee with id number (%d):\n",i+1);
        printf("-----------------------------------------------\n\n");
        printf("Employee id: %d\n",emp[i].id);
        printf("Employee name: %s %s\n",emp[i].first_name,emp[i].sur_name);
        printf("Employee gender: %c\n",emp[i].gender);
        printf("Employee date of birth: %d / %d / %d\n",emp[i].arr[0],emp[i].arr[1],emp[i].arr[2]);
        printf("Employee age: %d\n",emp[i].age);
        printf("Employee phone number: %d\n",emp[i].phone_number);
        printf("Employee net salary: %d$\n",emp[i].net_salary);
        printf("-------------------------------------\n");
        printf("\n");
        printf("------------------------------------------------------------------------------\n\n");

        }
    }
        if(flag==0){
        printf("\n-----------------------------------------------");
        printf("\nThere isn't an employee with this id\n");
        printf("-----------------------------------------------\n\n");
        }
}

//==================================================

void delete_employeeid(struct my_employee* emp,uint32 num){
    for(uint32 i=num;i<employee_count;i++){
        strcpy(emp[i-1].first_name,emp[i].first_name);
        strcpy(emp[i-1].sur_name,emp[i].sur_name);
        emp[i-1].arr[0]=emp[i].arr[0];
        emp[i-1].arr[1]=emp[i].arr[1];
        emp[i-1].arr[2]=emp[i].arr[2];
        emp[i-1].gender=emp[i].gender;
        emp[i-1].phone_number=emp[i].phone_number;
        emp[i-1].net_salary=emp[i].net_salary;
        emp[i-1].age=emp[i].age;
        emp[i-1].id=emp[i].id;
    }
    employee_count--;
    printf("\n");
    printf("------------------------------------------------------------------------------\n\n");
}

//==================================================

void financial(struct my_employee* emp,uint32 num){
    printf("\nEnter his financial details\n");
    while(1) {
        printf("\nEnter deductions: ");
        if(scanf("%d", &emp[num-1].deductions) == 1 &&emp[num-1].deductions >=0)
            break;
            printf("\nEmployee deductions must be a positive integer\n");
            }
    while(1) {
        printf("\nEnter bonus: ");
        if(scanf("%d", &emp[num-1].bonus) == 1 &&emp[num-1].bonus >=0)
            break;
            printf("\nEmployee bonus must be a positive integer\n");
            }
    emp[num-1].tasks=.05*emp[num-1].net_salary;
    while(1) {
        uint32 hours;
        printf("\nEnter overtime hours: ");
        if(scanf("%d", &hours) == 1 &&hours >=0)
            emp[num-1].overtime=100*hours;
            break;
            printf("\nEmployee over time hours must be a positive integer\n");
            }
        printf("\n[%s %s] net salary = %d\n",emp[num-1].first_name,emp[num-1].sur_name,
            (emp[num-1].net_salary+emp[num-1].bonus+emp[num-1].overtime)-(emp[num-1].tasks+emp[num-1].deductions));
        printf("\n");
        printf("------------------------------------------------------------------------------\n\n");
}

