#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string x,c;
    vector<string> y;
     cin>>x;
   /* for(int i=0;i<n;i++)
    {
        for(int j=i-1;j>=0;j--)
        {
           c = string() + x[i] + x[j];
           y.push_back(c);

        }
       for(int k=i+1;k<n;k++)
        {
            c = string() + x[i] + x[k];
           y.push_back(c);

        }
    }*/
    for(int i=0;i<n;i++)
    {
        c = string() + x[i] + x[i+1];
           y.push_back(c);
    }
    int s=y.size();
    int co=0;
    vector<string> w;
    for(int i=0;i<s;i++)
    {
        int c=1;
        bool ch=false;
        for(int j=0;j<i;j++)
        {
            if(y[j]==y[i])
            {
                ch=true;
                break;
            }
        }
        if(ch) {continue;}
        else
        {
            for(int k=i+1;k<s;k++)
            {
                if(y[k]==y[i])
                {
                    c++;
                }
            }
            if(c>co)
            {
                co=c;
                w.clear();
                w.push_back(y[i]);
            }
        }
    }
    cout<<w[0];
}
