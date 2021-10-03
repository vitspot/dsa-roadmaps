class Solution
{
public:
    vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
    {

        if (mat.empty())
            return mat;

        int m = mat.size();
        int n = mat[0].size();

        if (m * n < r * c)
            return mat;
        if (m * n > r * c)
            return mat;

        vector<vector<int>> newmat(r, vector<int>(c));
        for (int i = 0; i < r * c; i++)
        {
            newmat[i / c][i % c] = mat[i / n][i % n];
        }
        return newmat;
    }
};