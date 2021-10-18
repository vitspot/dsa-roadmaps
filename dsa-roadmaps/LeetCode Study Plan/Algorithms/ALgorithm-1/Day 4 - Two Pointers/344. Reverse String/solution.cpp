class Solution {
public:
    void reverseString(vector<char>& vect) 
    {
        
        size_t start =0;
        size_t end=vect.size()-1;
        while(start<end)
        {
            swap(vect[start], vect[end]);
            start++; end--;
        }

        
    }
};
