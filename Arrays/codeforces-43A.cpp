#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int n,i=0;
    cin>>n;
    vector<string> x(n);
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    int c=0;
    string z;
    for(int i=0;i<n;i++)
    {
        int co=1;
        bool ch=false;
        for(int k=0;k<i;k++)
        {
            if(x[i]==x[k])
            {
                ch=true;
                break;
            }
        }
        if(ch) {continue;}
        else
        {
            for(int j=i+1;j<n;j++)
            {
                if(x[j]==x[i])
                {
                    co++;
                }
            }
            if(co>c)
            {
                c=co;
                z=x[i];
            }
        }
    }
    cout<<z;
}
