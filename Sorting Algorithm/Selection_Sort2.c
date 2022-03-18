#include <stdio.h>

int Selection_sort2(int A[],int n)
{
    int i,j,index_min,temp;

    for(i=0; i<n-1; i++)
    {
        index_min=i;

        for(j=i+1; j<n; j++)
        {
            if(A[j]<A[index_min])
            {
                index_min=j;
            }
        }

        if(index_min !=i)
        {
            temp=A[i];
            A[i]=A[index_min];
            A[index_min]=temp;
        }
    }
}

void PrintArray(int A[],int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ",A[i]);
    }
}

void Input(int A[],int n)
{
    for (int i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
}

int main()
{
    int n;

    printf("Enter your array length: \n");
    scanf("%d",&n);
    int A[n];
    printf("Enter your array number: ");

    Input(A,n);

    Selection_sort2(A,n);
    PrintArray(A,n);


}
