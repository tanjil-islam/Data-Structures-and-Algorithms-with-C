#include <stdio.h>;

int binary_search(int Array[],int n, int x)
{
    int left, right, mid;
    left=0;
    right=n-1;

    while(left<= right)
    {
        mid = (left+right)/2;

        if(Array[mid]==x)
        {
            return mid;
        }

        if(Array[mid]<x)
        {
            left=mid+1;
        }

        else
        {
            right=mid-1;
        }
    }

    return -1;
}

int main()
{
    int n;
    int numbers[]= {1,2,3,4,5,6,7,8,9,10};

    printf("Please enter your number for seaching: ");
    scanf("%d",&n);

    printf("Your searching number position: %d",binary_search(&numbers,10,n));
}
