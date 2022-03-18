#include <stdio.h>

int bubble_sort2(int A[], int n)
{
    int i,j,temp;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}

void printArray(int A[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ",A[i]);
    }
}

void Input(int A[], int n)
{
    for(int i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
}


int main()
{

    int n;
    printf("Please enter your length of index: ");
    scanf("%d",&n);
    int A[n];

    printf("Enter your array number: ");
    Input(A,n);

    bubble_sort2(A,n);
    printArray(A,n);

}
