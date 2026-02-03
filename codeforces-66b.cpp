#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        int co=1;
        for(int j=i;j<n-1;j++)
        {
            if(arr[j]>=arr[j+1])
            {
                co++;
            }
            else{break;}
        }
         for(int k=i;k>0;k--)
        {
            if(arr[k]>=arr[k-1])
            {
                co++;
            }
            else{break;}
        }
        if(co>c)
        {
            c=co;
        }
    }
    cout<<c;
}
