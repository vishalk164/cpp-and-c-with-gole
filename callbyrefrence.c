#include<stdio.h>
int swap(int *,int *);
int main()
{
    int a=50;
    int b=100;
    printf("value of a and b before swap %d and %d\n",a,b);
    swap(&a,&b);
    printf("value of a is %d and b is %d after the swap\n",a,b);
}
int swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("Value of a and b is %d and %d\n",*x,*y);
    
}
