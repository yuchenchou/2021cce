#include <stdio.h>
int main()
{
    int n=11;
    int sum=0;
    while (n>0)
    {
        sum+=n%10;
        n=n/10;
    }
    printf("%d\n",sum);
}
