#include <stdio.h>

int main() {
    struct{
        char name[100];
        char designation[100];
        char joining_date[12];
        float salary;
    }
    employee1;
    float salaryupdate;
    printf("Enter Employee details:\n");
    printf("Name:");
    scanf("%s",employee1.name);
    printf("Designation:");
    scanf("%s",employee1.designation);
    printf("Joining Date:");
    scanf("%s",(char*)employee1.joining_date);
    printf("Salary:");
    scanf("%f",&employee1.salary);
    printf("\n");
    printf("Salary update:");
    scanf("%f",&salaryupdate);
    printf("\n");
    employee1.salary = employee1.salary + salaryupdate;
    printf("Updated Employee Details \n");
    printf("Name: %s\n",employee1.name);
    printf("Designation: %s\n",employee1.designation);
    printf("Joining Date: %s\n",employee1.joining_date);
    printf("Salary: %.2f\n",employee1.salary);
    
    return 0;
}