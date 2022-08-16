#include<bits/stdc++.h>
using namespace std;
vector<int> maxEleSubarray(int a[],int n,int k)
{
    vector<int>v;
    deque<int>dq;
    int i=0,j=0;
    while(j<n)
    {
        while(!dq.empty() && a[j]>dq.back())
        {
            dq.pop_back();
        }
        dq.push_back(a[j]);

        if(j-i+1<k)
        {
            j++;
        }
        else if(j-i+1==k)
        {
          v.push_back(dq.front());
          if(a[i]==dq.front())
          dq.pop_back();
            
            i++;
            j++;
        }
    }
    return v;
} 
int main()
{
    int n;

    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;

    vector<int>v=maxEleSubarray(a,n,k);
   for(auto it:v)
   {
    cout<<it<<endl;
   }
}