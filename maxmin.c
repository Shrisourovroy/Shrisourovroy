#include<stdio.h>
int main()
{
    int a[10];
    printf("Enter the array elements: ");
    for(int i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }

   int max=a[0], sec_max=a[1];
   for(int i=1; i<10; i++)
   {
    if(a[i]>max)
    {
        sec_max = max;
        max=a[i];
    }
    else if(a[i]>sec_max)
    {
        sec_max = a[i];
    }
   }
   printf("Max = %d, Sec_max = %d",max,sec_max);
   return 0;
}