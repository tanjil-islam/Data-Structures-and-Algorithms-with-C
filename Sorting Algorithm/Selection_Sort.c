#include <stdio.h>

int selection_sort(int A[],int n)
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

        if(index_min !=1)
        {
            temp=A[i];
            A[i]=A[index_min];
            A[index_min]=temp;
        }
    }
}

int main()
{
    int n=7;
    int number[]={4,7,2,9,5,8,11};

    printf("Your searching number position: ",selection_sort(&number[]));

}
