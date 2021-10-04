long long int count( int S[], int sum, int size )
    {
        long long int dp[sum+1][size+1];
        for(int i=0;i<=sum;i++)
        {
            dp[i][0] = 1;
        }
        for(int j=1;j<=size;j++)
        {
            dp[0][j] = 0;
            }
        for(int i=1;i<=sum;i++)
        {
            for(int j=1;j<=size;j++)
            {
                if(S[i-1]<=j)
                {
                    dp[i][j] = dp[i-1][j] + dp[i][j-S[i-1]];
                }
                else
                {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[sum][size];
        
    }