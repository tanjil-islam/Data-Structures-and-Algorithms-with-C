#include <stdio.h>

void bubble_sort(int A[],int n)
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
       printf("%d\n",A[i]);
    }

}

void arrayPrint(int array[],int n)
{
    for(int i=0; i<n; ++i)
    {
        printf("%d ",array[i]);
    }
}

int main()
{
    int n=5;
    int number[]= {8,2,4,1,5};


    bubble_sort(number,n);
    arrayPrint(number,n);

}
