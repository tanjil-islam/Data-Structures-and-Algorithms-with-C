#include <stdio.h>

int main()
{
    int A[]= {6,7,1,12,3,20};
    int n=6;
    int i,j,item;

    for(i=1; i<n; i++)
    {
        item=A[i];
        j=i-1;

        while(j>=0 && A[j]>item)
        {
            A[j+1]=A[j];
            j=j-1;
        }
        A[j+1]=item;
    }

    for(i=0; i<n; i++)
    {
        printf(" %d",A[i]);
    }
}
