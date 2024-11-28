#include<stdio.h>

void main()
{
    int choice;

    printf("\n press 1 for mal");
    printf("\n press 2 for femal");
    printf("\n press 3 for other");

    printf("\n enter your choice :");
    scanf("%d",&choice);

    switch (choice)
    {
        case 1:
            printf("\n you have selected male");
        break;

        case 2:
            printf("\n you have selected female");
        break;

        case 3:
            printf("\n you have selected other");
        break;
    
        default:
            printf("\n invalide choice");
        break;
    }

}