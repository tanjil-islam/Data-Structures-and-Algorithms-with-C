#include <stdio.h>

void linearSearch(int A[],int n,int x)
{
    int i;
    for(i=0; i<n;i++)
    {
        if(A[i]==x)
        {
            printf("Yes %d is here and it's position is: %d",x,i);
        }
    }
    printf("Not found: %d",x);

}

int main()
{
    int n;
    int A[]={1,2,3,4,5,6,7,8,9,10};

    printf("Please enter your searching number: ");
    scanf("%d",&n);

    linearSearch(&A,10,n);

}
