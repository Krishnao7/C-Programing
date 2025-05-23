#include<stdio.h>

int main()
{
    int a= 12 ,b = 5 ,temp;
    //swaping valude using another integer (temp)
    temp =  a;
    a = b;
    b = temp;
    
     printf(" swap  the value of a and b: a=%d\n, b=%d\n" ,a,b);


   //Without Using a Temp
   int n = 78, j = 69;
   n= n+j;
   j= n-j;
   n = j-n;
   printf("After swapping: n = %d, j = %d\n", n, j);

   return 0;
   
}