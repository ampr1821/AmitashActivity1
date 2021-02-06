//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
int getnum()
{
int num;
printf("> ");
scanf("%d", &num);
return num;
}
int add(int[] a)
{
int n = sizeof(a)/sizeof(int);
int sum = 0;
for(int i=0;i<n;i++)
{
sum += a[i];
}
return sum;
}
void disp(int a)
{
printf("The sum of the entered numbers is %d\n", a);
}
int main()
{
int n, sum;
printf("How many numbers do you want to add? ");
scanf("%d", &n);
printf("Enter the numbers to be added: ");
for(int i=0;i<n;i++)
{
a[i] = getnum();
}
sum = add(a);
disp(sum);
return 0;
}
