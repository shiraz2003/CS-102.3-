#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*
    Question 1
#include <stdio.h>
int main()
{
int num,ans;
printf("Enter the Number: ");
scanf("%d",&num);
ans = num%2;
if (ans==1)
printf("%d is an Odd Number",num);
else
printf("%d is an Even Number ",num);
}
*/


/*
Question 2
#include <stdio.h>
int main() {
int opt,num1,num2,result;
printf("1-Addition\n");
printf("2-Subtraction\n");
printf("3-Multiplication\n");
printf("4-Division\n");
printf("Select Operator: ");
scanf("%d",&opt);
printf("Enter 2 Values: \n");
scanf("%d %d",&num1,&num2);
switch(opt) {
case 1:
result=num1+num2;
printf("Output = %d",result);
break;
case 2:
result=num1-num2;
printf("Output = %d",result);
break;
case 3:
result=num1*num2;
printf("Output = %d",result);
break;
case 4:
printf("Output = %.2f",(float) num1/num2);
break;
default:
printf("Invalid Operator!");
}
*/


}


/*
Question 3
#include <stdio.h>
int main() {
int opt;
float r,c,a,v,pi;
printf("1-Circumference\n");
printf("2-Area\n");
printf("3-Volume\n");
printf("preferred Operator no : ");
scanf("%d",&opt);
printf("Enter the radius of the circle: ");
scanf("%f",&r);
pi=3.142;
switch(opt) {
case 1:
c=2*pi*r;
printf("Circumference = %.2f",c);
break;
case 2:
a=pi*r*r;
10
printf("Area = %.2f",a);
break;
case 3:
v=(4/3)*pi*r*r*r;
printf("Output = %.2f",v);
break;
}
*/


/*
}
Question 4
#include <stdio.h>
int main()
{
char charValue,ncharValue;
printf("Enter a Character: ");
scanf("%c",&charValue);
ncharValue = tolower(charValue);
switch(ncharValue) {
case 'a' :
case 'e' :
case 'i' :
case 'o' :
case 'u' :
printf("%c is a Vowel\n",charValue);break;
default:
printf("%c is not a Vowel\n",charValue);
}
*/



/*
Question 5
#include <stdio.h>
int main()
{
int mno;
printf("Enter Month Number: ");
scanf("%d",&mno);
switch(mno) {
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
printf("31 Days in the %d Month",mno);break;
case 4:
case 6:
case 9:
case 11:
printf("30 Days in the %d Month",mno);break;
case 2:
printf("28 Days in the %d Month",mno);break;
default:
printf("The Entered Month Number is Invalid");
}
}
*/
}
