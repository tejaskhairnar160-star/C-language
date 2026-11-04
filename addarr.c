/*
     0 1 2
  0  1 2 3 = 6
  1  4 5 6 = 15
  2  7 8 9 = 24
*/

#include<stdio.h>

void main()
{
    int i,j,add[3][3],sum=0;
    printf("\n===== Input =====\n\n");

    for(i=0;i<3;i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the %d rows and %d column number : ",i+1,j+1);
            scanf("%d",&add[i][j]);
        }
    }

    printf("\n\n===== Display ======\n");
    for(i=0;i<3;i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ",add[i][j]);
        }
        printf("\n");
    }

    printf("\n\n=============== After Addition ============ \n");                                            
    for(i=0;i<3;i++)                            
    {          
        sum = 0;                                             
        for (j = 0; j < 3; j++)                  
        {   
            printf("%d\t",add[i][j]);
                 
            sum = sum + add[i][j];
        }
        printf("=\t%d",sum);
        printf("\n");
    }

}

