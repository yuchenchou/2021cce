#include <stdio.h>
int main()
{
    int n=6;
    for(int i=1;i<=n;i++)
    {
        printf("%d: ",i);
    for(int k=1;k<=i;k++) printf("*");
    printf("\n");
    }
}
