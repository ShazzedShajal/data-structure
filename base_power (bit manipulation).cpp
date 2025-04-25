#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;  cin>>n; // n is power
    long long h = (1e9+7); // big MOD Number, such that always small 
    long long res=1,base=2;

    while(n>0)
    {
        if(n&1==1)
            res = (res*base)%h;
        base= (base*base)%h;
        n= n>>1;
    }
    cout<<res<<endl;
    return 0;
}
