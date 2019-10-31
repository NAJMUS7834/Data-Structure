/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[100],mid,first,last,search,i,n;
    printf("\n Enter the length of array \n");
    scanf("%d",&n);
    printf("\nEnter %d integers in sorted order\n",n);
    for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
    printf("\nEnter the key/search Element\n");
    scanf("%d",&search);
    first=0;
    last=n-1;
    mid=first+last/2;
    if(a[mid]>search)
        {
            last=mid-1;
        }
    else if(a[mid]<search)
        {
            first=mid+1;
        }
    else
        {
            printf("\n %d found at %d",search,mid+1);
        }
    return 0;
}
