class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {

        vector<int> store;
        unordered_map<int, int> check;
        for (auto i : nums1)
        {
            check[i]++;
            // increment if already element present else add a new element  and increment
        }
        for (auto i : nums2)
        {
            if (check[i] > 0) // checking the value(min 1 means present)
            {
                store.push_back(i);
                check[i]--; // decreasing by 1 as there will me multiple element as eg 2 2
            }
        }

        return store;
    }
};