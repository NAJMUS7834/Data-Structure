/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[100],i,j,n,temp;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("\nEnter %d unsorted elements : \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //bubble sort algorithm
    printf("\n Sorted Array Using Bubble sort algorithm is : ");
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
         if(a[j]>a[j+1])
        {
            temp=a[j];//copy a[i] in temp
            a[j]=a[j+1];//move a[i+1] to a[i]
            a[j+1]=temp;//copy temp=a[i] to a[i+1]
        }   
       }
       
    }
    for(i=0;i<n;i++)
    printf(" %d ",a[i]);
    return 0;
}
