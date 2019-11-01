/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,j,temp,n,a[100];
    printf("Enter Size of array\n");
    scanf("%d",&n);
    printf("Enter %d element into the array to sort\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("\n Element sorted using insertion sort is : ");
    for(i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }

    return 0;
}
