#include<stdio.h>
int j=0,p=0;
int count(int *a,int *e,int *o)
{
    if(*a % 2 == 0) 
      {
          *e+=1;
      }
    else
       {
         *o+=1;
       }
    return 0;
};

void main()
{
    int e=0,o=0;
    int a[5],i,sum=0, odd[5],even[5];
    printf("Enter any number:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
        count(&a[i],&e,&o);
        if(a[i]%2!=0)
        {
            odd[o-1]=a[i];
        }
        else
        {
            even[e-1]=a[i];
        }
        odd[o]='\0';
        even[e]='\0';
    }
    printf("Sum=%d\nTotal odd numbers=%d\nTotal even numbers=%d\n",sum,o,e);
    printf("Odd\t\tEven\n");
    for( i=0 ; i<o || i<e ; i++ )
    {
        printf(" %d\t\t %d\n",odd[i],even[i]);
    }
}
