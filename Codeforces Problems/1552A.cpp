#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
long long int t;
cin>>t;
while(t--)
{
    int n,cnt=0;
    cin>>n;
    string s;
    cin>>s;
    string a=s;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        if(a[i]!=s[i])
            cnt++;
    }
cout<<cnt<<"\n";
}
return 0;
}
