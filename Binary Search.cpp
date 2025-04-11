#include<bits/stdc++.h>
using namespace std;

int is_okay()
{

}
void normal(){
    // find any  value,, at any index
    vector<int> v = {1,1,2,2,3,4,7,7,7,7,7,20,30,31}; // input 7 output at 8 index
    int x; cin>> x; int n = v.size();

    int left = 0 , right = n-1;
    while(left<right)
    {
        int mid = (left+right)/2;
        if(v[mid]<x) left = mid + 1;
        else if( v[mid]> x) right = mid-1;
        else
        {
            cout<<mid<<endl; // any index found
            break;
        }
    }
}


void normal2()
{ // focusd on the left side element
    // lower bound
    vector<int> v = {1,1,2,2,3,4,7,7,7,20,30,31};
    int x; cin>> x; int n = v.size();

    int left = 0 , right = n-1;
    while(left<right)
    {
        int mid = (left+right)/2;
        if(v[mid]<x) left = mid + 1;
        else if( v[mid]>= x) right = mid; // using '=' , most left value will found
    }
    cout<<left << " "<< right<<endl; // left and  right is also equal
    // left = lower bound


    //built in function
    int lowerIndex = lower_bound(v.begin(),v.end(),x) - v.begin() ;
    cout<<lowerIndex<<endl;
}

void good()
{
     // focusd on the most right side element
     // Upper bound problem
    vector<int> v = {1,2,2,3,4,7,7,20,30,31};
    int x; cin>> x; int n = v.size();

    int left = 0 , right = n; // n is +1 more
    while(left<right)
    {
        int mid = (left+right)/2;
        if(v[mid]<=x) left = mid + 1; // eliminating left7 part also if eqal
        else if( v[mid]>x) right = mid;
    }
    cout<<left-1 << " "<< right-1<<endl;
    // left =  upper bound

    //built in function
    int upperIndex = upper_bound(v.begin(),v.end(),x) - v.begin() ;
    cout<<upperIndex<<endl;
}

void better()
{
    int ara[100] = {0, 0, 0, 1, 1, 1};
     int n = 6;
    int l = 0, r = n;
    while (l < r) {
        int mid = (l + r) / 2;
        if (ara[mid] == 0) l = mid + 1;
        else r = mid;
    }
    int last0 = l - 1;
    int first1 = l;
}


int main()
{


    return 0;
}
