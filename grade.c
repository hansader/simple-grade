#include<stdio.h>

void main()
{
    int score;
    char grade;

    printf(" enter your score :");
    scanf("%f",&score);

   grade= (score>=90) ?  'A' : (score>=80) ?  'B' : 
    (score>=70) ?  'C' ? (score>=60) :  'D' :
    (score>=50) ?  'E' : 'F';

    printf("\n your grade is : %c",grade);

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

    if(grade>=50)
    {
        printf("\n Congratulations! you are eligible for the next level .");
    }
    else{
        
        printf("\n Please try again next time.");
    }
        
}