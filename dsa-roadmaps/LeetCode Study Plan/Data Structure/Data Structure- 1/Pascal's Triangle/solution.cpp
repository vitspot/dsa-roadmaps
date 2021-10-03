class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {

        vector<vector<int>> addin(numRows);
        for (auto i = 0; i < numRows; i++)
        {
            addin[i].resize(i + 1);
            addin[i][0] = addin[i][i] = 1;

            for (auto j = 1; j < i; j++)
            {
                addin[i][j] = addin[i - 1][j - 1] + addin[i - 1][j];
            }
        }
        return addin;
    }
};