
 // } Driver Code Ends


class Solution
{
    public:
        int maxAmt(int n , int h[] , int l[])
        {
           int dp[n];
           dp[0]=h[0];
           dp[1]=max(h[1],max(l[0]+l[1],dp[0]+l[1]));
           for(int i=2;i<n;i++)
           {
               dp[i]=max(h[i]+dp[i-2],dp[i-1]+l[i]);
           }
            return dp[n-1];
        }
};

// { Driver Code Starts.
int main()
{
    //You are given n days and for each day (di) you can select one of the following options: 
    //1.perform no task 
    //2.perform a high effort task (hi) only if its the first day or if you chose no-task on the previous day
    //3.perform a low effort task (li)
    //Write a program to find the maximum amount of tasks you can perform within these n days. 


    int t;
    cin>>t;
    while(t--)
        {
            int n;
            cin>>n;
            int hi[n] , li[n];
            for(int i = 0 ;i<n;i++)
                cin>>hi[i];
            for(int i = 0 ;i<n;i++)
                cin>>li[i];
            Solution ob;
            cout<<ob.maxAmt(n,hi,li)<<endl;    
        }
}  // } Driver Code Ends
