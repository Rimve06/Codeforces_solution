#include<iostream>
using namespace std;
void rem(int*arr,int r,int *s)
{
    while(r<*s-1)
    {
        arr[r]=arr[r+1];
        r++;
    }
    (*s)--;

}
int main()
{
    int n;
    cin>>n;
    int*x=&n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<*x;i++)
    {
        int k=1;
        for(int j=i+1;j<*x;j++)
        {
            if(arr[i]==arr[j])
            {
                rem(arr,i,x);
                i--;
                break;
            }
        }
    }
    cout<<*x<<endl;
     for(int i=0;i<*x;i++)
    {
        cout<<arr[i]<<" ";
    }

}

