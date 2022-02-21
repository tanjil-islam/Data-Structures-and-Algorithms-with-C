#include <stdio.h>;

int linear_search(int A[],int n, int x)
{
    int i;
    for(i=0; i<n; i++)
    {
        if(A[i]==x)
        {
            return i;
        }
    }
    i=-1;
    return i;
}

int main()
{
    int n;
    int numbers[]= {1,2,3,4,5,6,7,8,9,10};

    printf("Please enter your number for seaching: ");
    scanf("%d",&n);

    printf("Your searching number position: %d",linear_search(&numbers,10,n));
}

