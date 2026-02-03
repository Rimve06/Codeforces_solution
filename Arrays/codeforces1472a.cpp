#include<iostream>
using namespace std;
int main()
{
    int t,w,h,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
       int c=0;
      cin>>w>>h>>n;
        if(w%2==0)
    {
        c+=2;
    }
    if(h%2==0)
    {
        c+=2;
    }
    c++;
    if(c>=n)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    }
}
