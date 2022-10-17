#include <stdio.h>


int binarySearch(int A[],int n, int x)
{
    int left=0;
    int right=n-1;

    while(left<=right)
    {
        int mid=(left+right)/2;

        if(A[mid]==x)
        {
            return mid;
        }

        if(A[mid]<x)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
}

int main()
{
    int A[]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,29,20,21,22,23,24,25,26,27,28,29,30};
    int n=30;
    int x;

    printf("Please enter your searching number: ");
    scanf("%d",&x);

    printf("Yes here is your searching number and it's position is: %d",binarySearch(&A,n,x));

}
