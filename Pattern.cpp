
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000009
int main()
{
    int n;
    cin>>n;
    ll si=0;
    int f=0;
    vector<char>ans(1000001);
    while(n--)
    {
        string s;
        cin>>s;
        ll k=s.size();
        si=max(si,k);
        if(f==0)
        for(int i=0;i<s.size();i++)
        {

               ans[i]=s[i];
           f=1;
        }
           else{
            for(int i=0;i<s.size();i++)
           {
               if(ans[i]=='?')
                ans[i]=s[i];
               else if(s[i]!='?'&&ans[i]!='?'&&s[i]!=ans[i])
               {
                   ans[i]='/';
               }
           }
           }

    }
    for(int i=0;i<si;i++)
    {

       if(ans[i]=='?')
            cout<<"a";
        else if(ans[i]=='/')
            cout<<"?";
        else
            cout<<ans[i];
    }

}
