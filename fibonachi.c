#include<stdio.h>
#include<conio.h>
 int fibonacci(int n)
 {
     int i=1,sum=1;
     printf("%d  %d  ",i,sum);
     for(int b=0;b<n;)
     {
        i=i+sum;
        printf("%d  ",i);
        b++;
        sum=sum+i;
        printf("%d  ",sum);
        b++;

     }
 }
 void main()
 {
     int n;
     printf("This is Fibonacci series...\nEnter the number terms you want minus three(3), i.e if you want 5 terms you have to print 2 but, not less then 2 terms\n");
     scanf("%d",&n);
     fibonacci(n);
     getch();
 }
