/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[100],i,search,n;
    printf("Printf Enter Size of array\n");
    scanf("%d",&n);
    printf("\nEnter %d integers \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter search Element\n");
    scanf("%d",&search);
    for(i=0;i<n;i++){
        if(a[i]==search)
        {
            printf("\n%d Element found at %d\n",search,i);
            break;
        }
    }
    if(i==n){
        printf("\n %d not found in the array\n",search);
    }
    return 0;
}
