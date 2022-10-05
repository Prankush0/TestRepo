
#include<iostream>
using namespace std;
int main()
{
    int n,f=1,n1,f1=1,gcd;
    std::cin>>n>>n1 ;
    for(int i=1;i<=n && i<=n1;i++)
    {
        f=f*i;
        f1=f1*i;
    }

    for (int i = 1; i <= f && i <= f1; i++)
    {
        if (f % i == 0 && f1 % i == 0)
        {
            gcd = i;
        }
    }
    std::cout<<gcd;
}
