class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length(),start=0,len=1,mx=INT_MIN;
        vector<vector<int>>dp(n,vector<int>(n,0));
        for (int l=1;l<=n;l++)
        {
            for (int i=0;i+l<=n;i++)
            {
                int j=i+l-1;
                if (l==1) dp[i][j]=1;
                else if (l==2)
                {
                    if (s[i]==s[j]) dp[i][j]=1;
                    else dp[i][j]=0;
                }
                else {
                    if (s[i]==s[j]) dp[i][j]=dp[i+1][j-1];
                    else{
                        dp[i][j]=0;
                    }
                }
                if (dp[i][j]==1)
                {
                    if (l>mx)
                    {
                        start=i;
                        len=l;
                    }
                }
            }
        }
        string ans=s.substr(start,len);
        return ans;
    }
};
