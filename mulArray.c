#include<stdio.h>

int main()
{
    int a[2][2],b[2][2],mul[2][2];
    int i,j,k;

    printf("==========Accept the first array =======\n\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter the %d and %d column value : ",i+1,j+1);
            scanf("%i",&a[i][j]);
        }
        
    }

    printf("==========Accept the second array =======\n\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter the %d and %d column value : ",i+1,j+1);
            scanf("%i",&b[i][j]);
        }
        
    }


    for(i=0;i<2;i++) // row
    {
        for(j=0;j<2;j++) // col
        {
            mul[i][j]=0;
            for(k=0;k<2;k++) // multiplication calculate
            {
                mul[i][j] = mul[i][j] + a[i][k]*b[k][j];
            } // close most inner loop
        }
    }


    printf("\n\n================ Multiplication of 2D array =============\n");
    for (i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("%d  ",mul[i][j]);
        }
        printf("\n");
    }
    


    
    return 0;
}
