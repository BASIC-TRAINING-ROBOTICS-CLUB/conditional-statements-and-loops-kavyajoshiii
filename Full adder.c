#include<stdio.h>
#include<math.h>
#include "Full_Adder.h"
void main()
{
    int a,b,i,bin1[8],bin2[8],C[8],S[8],Sum=0;
    printf("Enter any two number(<255):\n");
    scanf("%d %d",&a,&b);
    if(a+b>=256)
    {
        printf("Error!! INVALID INPUT.");
    }
    else
    {
        for(i=0;i<8;i++)
        {
            bin1[7-i]=a%2;
            bin2[7-i]=b%2;
            a/=2;
            b/=2;
        }
        for(i=0;i<8;i++)
        {
            if(i!=0)
            {
                Full_Adder(bin1[7-i],bin2[7-i],C[i-1],&S[7-i],&C[i]);
                C[i-1]=0;
            }
            else
            {
                Full_Adder(bin1[7-i],bin2[7-i],0,&S[7-i],&C[i]);
            }
        }
        printf("\nBinary of num1: ");
        for(i=0;i<8;i++)
        {
            printf("%d",bin1[i]);
        }
        printf("\n\nBinary of num2: ");
        for(i=0;i<8;i++)
        {
            printf("%d",bin2[i]);
        }
        printf("\n\nDecimal of Sum of two numbers: ");
        for(i=0;i<8;i++)
        {
            Half_Adder(&S[7-i],&C[7-i]);
            printf("%d",S[i]);
            Sum += Bin_to_Dec(S[i],i);
        }
        printf("\n\nSum of two given number= %d",Sum);
    }
}
