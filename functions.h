#ifndef FUNCTIONS_h
#define FUNCTIONS_h

void add_employee(struct my_employee* emp);

void display_employees(struct my_employee* emp);

void search_employeefirstname(struct my_employee* emp,uint8 arr[]);

void search_employeeid(struct my_employee* emp,uint32 num);

void financial(struct my_employee* emp,uint32 num);

void delete_employeeid(struct my_employee* emp,uint32 num);

#endif // FUNCTIONS
