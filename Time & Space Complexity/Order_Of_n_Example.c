#include <stdio.h>

int main()
{
    int i, n,even[101];

    for(i=0; i<n; i++)
    {
        even[i]=0;
    }

    for(i=0; i<n; i+=2)
    {
        even[i]=1;

    }
    scanf("%d",&n);

    if(even[n])
    {
        printf("%d is even number",n);
    }
    else
    {
        printf("%d is odd number",n);
    }

    return 0;
}
