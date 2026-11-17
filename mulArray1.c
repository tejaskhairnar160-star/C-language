#include<stdio.h>
int main()
{
    int a[2][2]={{1,2},{3,4}}, b[2][2]={{5,6},{7,8}},mul[2][2];
    int i,j,k;

    for(i=0/*1*/;i<2;i++) // row
    {
        for(j=0 /*1*/ ;j<2;j++) // col                                  //  0 1    0 1     
        {                                                               //0 1 2  0 5 6    
            mul[i][j]=0;                                                //1 3 4  1 7 8   
                                                          
            for(k=0/*1*/;k<2;k++) // multiplication calculate
            {
                mul[i][j] = mul[i][j] + a[i/*1*/][k/*1*/]*b[k/*1*/][j/*1*/];  // 3*6=18 + 4*8=32 = 50
            } // close most inner loop
        }
    }

    printf("\n\n================ Multiplication of 2D array =============\n");
    for (i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)//19 = 1*5 + 2*7  22 = 1*6 + 2*8   //   0  1
        {                       //43 = 3*5 + 4*7  50 = 3*6 + 4*8   // 0 19 22
            printf("%d  ",mul[i][j]);                              // 1 43 50
        }
        printf("\n");
    }
    return 0;
}
