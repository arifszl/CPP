#include<bits/stdc++.h>
using namespace std;
vector<int> firstnegEle(int a[],int n,int k)
{
    vector<int>v;
   queue<int>q;
    int i=0,j=0;
    while(j<n)
    {
        if(a[j]<0)
        {
            q.push(a[j]);
        }
       
        if(j-i+1<k)
        {
            j++;
        }
        else if(j-i+1==k)
        {
            if(q.empty())
            {
                v.push_back(0);
            }
            else{
  v.push_back(q.front());
            }
         
           i++;
           j++;

          if(a[i-1]==q.front())
          q.pop();
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

    vector<int>v=firstnegEle(a,n,k);
    for(auto it:v)
    {
        cout<<it<<" ";
    }
}