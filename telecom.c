#include<stdio.h>

void main()
{
    int choice;

    repeatelanguage:
    printf("\n press 1 for Eglish");
    printf("\n press 2 for hindi");
    printf("\n press 3 for gujarati");

    printf("\n Enter your choice :");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:

        repeaterecharge:
        printf("\n press 1 for internet Recharge");
        printf("\n press 2 for top-up Recharge");
        printf("\n press 3 for special Recharge");

        printf("\n Enter your choice :");
        scanf("%d",&choice);

        
        switch (choice)
        {
            case 1:
            printf("\n you have successfully done a internet Recharge");
            break;
            case 2:
            printf("\n you have successfully done a top-up Recharge");
            break;
            case 3:
            printf("\n you have successfully done a special Recharge");
            break;
        
        default:
            goto repeaterecharge;
            break;
        }
        break;
        case 2:

        repeatehindi:
        printf("\n internet Recharge kr liye 1 dabaiye");
        printf("\n top-up Recharge kr liye 2 dabaiye");
        printf("\n special Recharge kr liye 3 dabaiye");

        printf("\n Enter your choice :");
        scanf("%d",&choice);

        
        switch (choice)
        {
            case 1:
            printf("\n aapne safaltapurvak internet Recharge kar liya he");
            break;
            case 2:
            printf("\n aapne safaltapurvak top-up Recharge kar liya he");
            break;
            case 3:
            printf("\n aapne safaltapurvak special Recharge kar liya he");
            break;
        
        default:
            goto repeatehindi;
            break;
        }
        break;
        case 3:

        repeateguj:
        printf("\n internet Recharge mate 1 dabavo");
        printf("\n top-up Recharge mate 2 dabavo");
        printf("\n special Recharge mate 3 dabavo");

        printf("\n Enter your choice :");
        scanf("%d",&choice);

        
        switch (choice)
        {
            case 1:
            printf("\n tame safadtapurvak internet Recharge karyu chhe");
            break;
            case 2:
            printf("\n tame safadtapurvak top-up Recharge karyu chhe");
            break;
            case 3:
            printf("\n tame safadtapurvak special Recharge karyu chhe");
            break;
        
        default:
             goto repeateguj;
            break;
        }
        break;
    
    default:
        goto repeatelanguage;
        break;
    }

}