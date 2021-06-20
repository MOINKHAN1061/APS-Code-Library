#include<bits/stdc++.h>
using namespace std;
int getMaxSum(int n)
{
    int dp[n+1]={0};
    for(int i=1;i<=n;i++)
    {
        dp[i]=max(i,dp[i/2]+dp[i/3]+dp[i/4]);
    }
    return dp[n];
}
int main()
{
    int n;
    cin>>n;
    cout<<getMaxSum(n)<<endl;
    return 0;
}
