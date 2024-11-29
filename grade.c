#include<stdio.h>

void main()
{
    int score;
    char grade;

    printf(" enter your score :");
    scanf("%d",&score);

    (score>=90 && score<=100) ? grade= 'A' :
    (score>=80 && score<90) ? grade= 'B' : 
    (score>=70 && score<80) ? grade= 'C' :
    (score>=60 && score<70) ? grade= 'D' :
    (score>=50 && score<60) ? grade=  'E' : 
    (score<50) ? grade=  'F' :
    printf("INVALIDE INPUT");
    

    printf("\n your grade is : %d",score);

    switch (grade)
    {
        case 'A':
          printf("\n Excellent work!");
        break;

        case 'B':
          printf("\n Well done!");
        break;

        case 'c':
          printf("\n Good job!");
        break;

        case 'D':
          printf("\n so-so!");
        break;

        case 'E':
          printf("\n You passed,but you could do better!");
        break;

        case 'F':
          printf("\n Sorry,you failed!");
        break;
        
    
    default:
            printf("\n ERROR: ou! something went wronge...");
        break;
    }

    if(grade=='A' || grade=='B' || grade=='C' || grade=='D' || grade=='E')
    {
        printf("\n Congratulations! you are eligible for the next level %c",grade);
    }
    else
    {
        
        printf("\n Please try again next time%c"),grade;
    }
        
}
