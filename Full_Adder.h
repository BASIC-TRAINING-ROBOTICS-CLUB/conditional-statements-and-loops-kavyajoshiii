
int Full_Adder(int a,int b,int C,int *S,int *Co)
{
    *S=a^b^C;
    *Co=(a&b)|(C&(a^b));
    return 0;
};
int Half_Adder(int *a,int*b)
{
    *a= *a ^ *b;
    *b= *a & *b;
    return 0;
};
int f(int x)
{
    return pow(2,x);
};
int Bin_to_Dec(int a, int i)
{
    return (a*f(7-i));
};