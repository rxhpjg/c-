#include<stdio.h>
int main()
{
    int i,temp,j;
    float a[10];
    printf("input 10 numbers:");
    for(i=0;i<10;i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=0;i<9;i++)
    {
        for(j=0;j<9-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%10f",a[i]);
    }

    return 0;
}
