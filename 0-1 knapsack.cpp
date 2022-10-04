// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        vector<vector<int>> arr(n+1);
        for(int i=0;i<=n;i++)
        arr[i] = vector<int>(W+1,0);
        for(int i=1;i<=n;i++)
        for(int j=1;j<=W;j++)
        {
            if(wt[i-1]<=j)
            arr[i][j] = max(val[i-1] + arr[i-1][j-wt[i-1]],arr[i-1][j]);
            else
            arr[i][j] = arr[i-1][j];
        }
        return arr[n][W];
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
    return 0;
}  // } Driver Code Ends