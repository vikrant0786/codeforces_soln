
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000009
ll t;
bool is_re(string s)
{
    stack<char>st;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(')
        {
            st.push('(');
        }
        else
        {

            if(st.empty())
                return false;
            else if(st.top()=='(')
                        st.pop();
        }
    }
    return (st.size()==0);
}
void solve()
{
string s;
cin>>s;
int n=s.size();
char f=s[0],l=s[n-1];
if(f==l)
{
    cout<<"NO\n";
    return;
}
char x;
if((f=='A'&&l=='C')||(f=='C'&&l=='A'))
    x='B';
else if((f=='A'&&l=='B')||(f=='B'&&l=='A'))
    x='C';
else
    x='A';
string s2=s;
for(int i=0;i<n;i++)
{
    if(s[i]==f)
    {
        s[i]='(';
        s2[i]='(';
    }
    else if(s[i]==l)
    {
        s[i]=')';
        s2[i]=')';
    }
    else
    {
        s[i]='(';
        s2[i]=')';
    }
}
    if(is_re(s)||is_re(s2))
    {
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
}

int main()
{
 cin>>t;
 while(t--)
    solve();
}
