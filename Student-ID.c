#include<stdio.h>
struct Result
{
    double Roll_no;
    char Name[20];
    char Address[50];
    double Contact_no;
};
void main()
{
    struct Result Student;
    printf("Enter the Enrollment no: ");
    scanf("%lf",&Student.Roll_no);
    printf("Name: ");
    getchar();
    fgets(Student.Name,sizeof(Student.Name),stdin);
    printf("Address: ");
    getchar();
    fgets(Student.Address,sizeof(Student.Address),stdin);
    printf("Contact No.: ");
    scanf("%lf",&Student.Contact_no);
    printf("Name - %s",Student.Name);
    printf("\nEnrollment No. - %.0lf",Student.Roll_no);
    printf("\nAddress - %s",Student.Address);
    printf("\nContact No. - %.0lf",Student.Contact_no);
}