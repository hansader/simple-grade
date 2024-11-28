#include<stdio.h>

void main()
{
    int a,b,c;

    printf("enter value of a:");
    scanf("%d",&a);
    printf("enter value of b:");
    scanf("%d",&b);
    printf("enter value of c:");
    scanf("%d",&c);

     (a<b) ? ((a<c) ? printf("a is min") : printf("c is min")) : (b<c) ? printf("b is min") :printf("c is min");
}