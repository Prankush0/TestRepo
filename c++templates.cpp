/*#include<iostream>
using namespace std;
int main()
{
   int n,a[10000],sum;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       cin>>a[i];
   }
   for(int i=1;i<=n;i++)
   {
       sum+=a[i];
   }
   if(sum==1)
   {
       cout<<"HARD";
   }
   else if(sum==0)
   {
       cout<<"EASY";
   }
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int n,f=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    cout<<f;
}
*/

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
