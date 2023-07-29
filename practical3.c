#include <stdio.h>
#include <stdlib.h>


 /*
Question 1

#include <stdio.h>
int main()
{
int n1,n2,max;
printf("Enter Two Numbers: ");
scanf("%d %d",&n1,&n2);
if(n1>n2)
max=n1;
else
max=n2;
printf("The Highest Number is %d \n",max);
}
*/


/*
Question 2

#include <stdio.h>
int main()
{
int n1,n2,n3,max,min;
printf("Enter Three Numbers: ");
scanf("%d %d %d",&n1,&n2,&n3);
max=n1;
min=n1;
if(max<n2)
max=n2;
if(max<n3)
max=n3;
if(min>n2)
min=n2;
if(min>n3)
min=n3;
printf("The Largest Number is %d \n",max);
printf("The Smallest Number is %d \n",min);
}
*/



/*
Question 3

#include <stdio.h>
int main()
{
char empname[50];
float bsalary,nsalary,incr;
printf("Enter Employee Name: ");
scanf("%s",&empname);
printf("Enter Basic Salary: ");
scanf("%f",&bsalary);
if(bsalary<5000)
incr=bsalary*0.05;
else if(bsalary>=5000 && bsalary<10000)
incr=bsalary*0.1;
else if(bsalary>=10000)
incr=bsalary*0.15;
nsalary=bsalary+incr;
printf("Employee %s has a new salary of %.2f
\n",empname,nsalary);
}
*/




/*

 Question 4

#include <stdio.h>
int main()
{
int n1,n2,n3,max,min;
printf("Enter Three Numbers: ");
scanf("%d %d %d",&n1,&n2,&n3);
max=n1;
min=n1;
if(max<n2)
max=n2;
if(max<n3)
max=n3;
if(min>n2)
min=n2;
if(min>n3)
min=n3;
printf("The Largest Number is %d \n",max);
printf("The Smallest Number is %d \n",min);
}
*/




/*
Question 5

#include <stdio.h>
int main()
{
int n1,n2;
printf("Enter Two Numbers: ");
scanf("%d %d",&n1,&n2);
if(n1%n2==0)
printf("%d is a multiple of %d \n",n1,n2);
else
printf("%d is not a multiple of %d \n",n1,n2);
}
*/




/*
Question 6

#include <stdio.h>
int main()
{
//UPPERCASE
printf("A: %d \n",'A');
printf("B: %d \n",'B');
printf("C: %d \n",'C');

//LOWERCASE
printf("a: %d \n",'a');
printf("b: %d \n",'b');
printf("c: %d \n",'c');
//NUMBERS
printf("0: %d \n",'0');
printf("1: %d \n",'1');
printf("2: %d \n",'2');
//SPECIAL SIGNS
printf("*: %d \n",'*');
printf("+: %d \n",'+');
printf("/: %d \n",'/');
}
*/

/*
Question 7

#include <stdio.h>
int main()
{
int yearsOfService, monthlySales;
char city;
float basicSalary, additionalAllowance = 0, bonus = 0,
grossRemuneration;
printf("Enter the Basic Salary: ");
scanf("%f", &basicSalary);
printf("Enter the number of years of service: ");
scanf("%d", &yearsOfService);
printf("Enter the monthly sales amount: ");
scanf("%d", &monthlySales);
printf("Enter the city ('C' for Colombo, 'O' for other cities): ");
scanf(" %c", &city);
// Calculate additional allowance for years of service
if (yearsOfService > 5) {
additionalAllowance = 0.1 * basicSalary;

}
// Calculate additional allowance for city
if (city == 'C') {
additionalAllowance += 2500;
}
// Calculate bonus based on monthly sales
if (monthlySales >= 0 && monthlySales <= 25000) {
bonus = 0.1 * monthlySales;
} else if (monthlySales > 25000 && monthlySales < 50000) {
bonus = 0.12 * monthlySales;
} else if (monthlySales >=50000) {
bonus = 0.15 * monthlySales;
}
// Calculate gross remuneration
grossRemuneration = basicSalary + additionalAllowance + bonus;
printf("\nGross Monthly Remuneration: %.2f\n", grossRemuneration);
}
*/
