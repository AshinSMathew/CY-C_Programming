//Program to store and display details of employees using structure 
#include <stdio.h>
struct employee
{
    char name[20];
    int emp_code[2];
    int salary[7];
};
int main()
{
    int n;
    printf("Enter the number of employees:\n");
    scanf("%d",&n);
    struct employee emp[n];

    for(int i=0;i<n;i++)
    {
        printf("Enter the name of the employee %d:\n",i+1);
        scanf("%s",emp[i].name);
        printf("Enter the employee code of employee %d:\n",i+1);
        scanf("%d",&emp[i].emp_code);
        printf("Enter the salary of employee %d:\n",i+1);
        scanf("%d",&emp[i].salary);
    }
    for(int j=0;j<n;j++)
    {
        printf("Name:%s\n",emp[j].name);
        printf("employee code:%d\n",emp[j].emp_code);
        printf("Salary:%d\n",emp[j].salary);
    }

    return 0;
}
