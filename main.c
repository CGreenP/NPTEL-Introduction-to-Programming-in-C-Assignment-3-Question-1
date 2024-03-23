#include <stdio.h>
#include <stdlib.h>
int find_even(int k)
{
    int r=(-1),n=0,count=0,ans=k;
    while(n!=(-1))
    {
        scanf("%d",&n);
        if(n==(-1))
        {
            break;
        }
        if(n!=(-1))
        {
            if(n%2==0)
            {
                count+=1;
                if(ans==count)
                {
                    r=n;
                    break;
                }
            }
        }
    }
    return r;
}
int main()
{
    int find_even(int k);
    int n,res;
    scanf("%d",&n);
    res=find_even(n);
    printf("%d",res);
    return 0;
}