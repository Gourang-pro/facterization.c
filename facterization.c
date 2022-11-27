#include<stdio.h>
#include<conio.h>

int main()
{
    int i;
    int new;
    int no1=0;
    int no2=1;

    printf("%d  %d",no1,no2);

    for(i=0;i<10;i++)

    {
        new=no1+no2;
        printf("  %d",new);
        no1=no2;
        no2=new;

    }
return 0;

}