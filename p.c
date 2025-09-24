// read the tenp from the user in celcius and convert it into k and f
#include<stdio.h>
int main()
{
    float k,f,c;
    printf("\n c = %f");
    scanf("%f",&c);
    f=(c*1.8)+32;
    printf("\n f = %f",f);
    k=c+273.15;
    printf("\n k = %f",k);
    return 0;
}