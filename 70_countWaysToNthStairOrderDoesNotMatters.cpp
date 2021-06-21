
 // } Driver Code Ends




class Solution
{
    public:
    //Function to count number of ways to reach the nth stair 
    //when order does not matter.
    long long countWays(int m)
    {
        long long dp[m+1];
        
        
        
        memset(dp,0,sizeof(dp));
        
        dp[0]=1;
        for(long long i=1;i<=m;i++)
            dp[i]+=dp[i-1];
        for(long long i=2;i<=m;i++)
            dp[i]+=dp[i-2];
        return dp[m];
    }
};

// { Driver Code Starts.
int main()
{
    //taking count of testcases
    int t;
    cin >> t;
    
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}  // } Driver Code Ends
