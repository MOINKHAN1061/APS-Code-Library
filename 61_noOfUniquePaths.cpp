//Initial template for C++
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution
{
    public:
    //Function to find total number of unique paths.
    int NumberOfPath(int a, int b)
    {
        int dp[a+1][b+1];
        for(int i=1;i<=a;i++)
        {
            for(int j=1;j<=b;j++)
            {
                
                if(i==1 || j==1)
                    dp[i][j]=1;
                else
                    dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[a][b];
    }
};


// { Driver Code Starts.
int main()
{
    //Given a A X B matrix with your initial position at the top-left cell, 
    //find the number of possible unique paths to reach the bottom-right cell of the matrix from the initial position.

    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking dimensions of the matrix
        int a,b;
        cin>>a>>b;
        Solution ob;
        //calling NumberOfPath() function
        cout << ob.NumberOfPath(a,b) << endl;
    }
}

  // } Driver Code Ends
