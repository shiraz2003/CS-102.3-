#include <stdio.h>
#include <stdlib.h>

/*
int main()
{
    While -

#include<stdio.h>
int main()
{
int num=0;
while (num<=100)
{
printf("%d\n",num);
num++;
}
}

Do loop –

#include<stdio.h>
int main()
{
int num;

do {
printf("%d\n",num);
num++;
}
while (num<=100);
}

For loop –
#include<stdio.h>
int main()
{

int num;

for (num=0;num<=100;num++)

{
printf("%d\n",num);
}
*/


/*
question3

#include<stdio.h>
int main()
{
int i,num, fac=1;
printf("Enter num:");
if (num<0){
printf("error");
}
else{
for(i=1;i<=num;i++)
fac*=1;

}

printf("factorial =%d",fac);
}

/*
question 4.

#include<stdio.h>
int main()
{
int num,sum=0,result;

printf("Enter Number :");
scanf("%d",&num);
while (num!=0){
result =num%10;
sum+=result;
num/=10;
}
printf("sum=%d",sum);
}
*/

/*
question 5.

#include <stdio.h>
int main()
{
int number, reversedNumber = 0, remainder;
printf("Enter a number: ");
scanf("%d", &number);
do {
remainder = number % 10;
reversedNumber = reversedNumber * 10 + remainder;
number /= 10;
} while (number != 0);
printf("Reversed number: %d\n", reversedNumber);
}
*/


/*
question 6.
#include<stdio.h>
int main()
{
int basevalue, exponentvale;

int power = 1;
printf("Enter base value: ");
scanf("%d",&basevalue);
printf("Enter exponent value: ");
scanf("%d",&exponentvale);
for (int i = 0; i < exponentvale; i++)
{
power *= basevalue;
}
printf("%dth of the %d = %d\n", exponentvale, basevalue,
power);
}
*/

/*
question 9.
#include<stdio.h>
int main()
{
char letter;
printf("ASCII value for letters A to Z: \n");
for ( letter = 'A'; letter <= 'Z'; ++letter)
{

printf("%c : %d\n",letter,letter);
}
}
*/

/*
question 10.
#include<stdio.h>
Int main()
{
Printf(“*” \n);
Printf(“**”\n);
Printf(“***”\n);
Printf(“****”\n);
}

11.
#include<stdio.h>
Int main()
{
Int num,count=1;
printf
("Enter a number: ");
scanf("%d",&num);

for(int i =2; i <= num; i++)
{
if(num % i==0)

{
count++;
}
}
if(count<=2){
printf("ok");
}
else
{
printf("no");
}
}
*/

/*
question 12.
#include<stdio.h>
int main()
{

int num,count=1;
printf("Enter a number: ");
scanf("%d",&num);
for(int i =2; i <= num; i++)
{
if(num % i==0)
{
count++;
}
}
if(count<=2){
printf("ok");
}
else{
printf("no");
}
}
*/


/*
question 13.

#include<stdio.h>
int main()
{
int number, sum;
Printf("Enter numbers(enter last number -1): \n");

while (1)
{
scanf("%d",&number);
if (number == -1)
{
break;
}
sum += number;
}
printf("The sum is %d\n",sum);
}
*/


/*
question 14.

#include<stdio.h>

int main()
{
int array[10];
printf("Enter 10 integers:\n");
for (int i = 0; i < 10; i++) {
scanf("%d", &array[i]);
}
printf("The array elements are: ");
for (int i = 0; i < 10; i++) {
printf("%d ", array[i]);
}
printf("\n");
}
*/

Section B

/*
question 1.
#include<stdio.h>
int main()
{
int positive=0,negative=0,zero=0,counter=1,num;
while (counter<=10)

{
printf("Enter value %d: ",counter);
scanf("%d",&num);
if (num>0)
{
positive=positive+1;
}
else if (num<0)
{
negative=negative+1;
}
else
{
zero=zero+1;
}
counter++;
}
printf("%d Positive numbers\n",positive);
printf("%d Negative numbers\n",negative);
printf("%d Zero numbers\n",zero);
}
*/


/*
question 2.

#include<stdio.h>
int main()
{
int counter=1, sum=0;
int marks[10], max, min;
float avg;
while (counter<=10)
{
printf("Student %d mark: ",counter);
scanf("%d",&marks[counter]);
sum=sum+marks[counter];
counter++;
}
avg=(float)sum/10.0;
max = marks[1];
min = marks[1];

for ( counter = 2; counter < 10; counter++)
{
if (marks[counter] > max)
{
max = marks[counter];
}
if (marks[counter] < min)
{
min = marks[counter];
}
}
printf("The average is %.2f\n",avg);
printf("Maximum marks: %d\n", max);
printf("Minimum marks: %d\n", min);
}


/*
question 3
#include<stdio.h>
int main()
{
int prices;

int sum = 0;
int count = 0;
int i;
float average;
printf("Enter the prices of 10 items:\n");
for (i = 0; i < 10; i++) {
printf("Item %d: $", i + 1);
scanf("%d", &prices);
sum += prices;
if (prices > 200) {
count++;
}
}
average = (float)sum / 10;
printf("Average value of an item: $%.2f\n", average);
printf("Number of items with price > $200: %d\n", count);
}
*/





/*
question 4.
#include<stdio.h>
Int main()
int employeeNo;
float basicSalary;

int count = 0;
printf("Enter the employee number and basic salary (-999
to end):\n");
while (1) {
printf("Employee No: ");
scanf("%d", &employeeNo);
if (employeeNo == -999)
break;
printf("Basic Salary: ");
scanf("%f", &basicSalary);
if (basicSalary >= 5000)
count++;
}
printf("Number of employees with basic salary >= $5000:
%d\n", count);
}
*/

}
