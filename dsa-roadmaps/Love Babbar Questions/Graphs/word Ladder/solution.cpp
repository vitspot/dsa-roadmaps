class Solution 
{
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) 
    {
        unordered_set<string>dict(wordList.begin(),wordList.end());
        if(dict.find(endWord)==dict.end())
        {
            return 0;
        }
        queue<string>q;
        q.push(beginWord);
        int steps=1;
        while(!q.empty())
        {
            int n=q.size();
            while(n)
            {
                string node=q.front();
                q.pop();
                if(node==endWord)
                {
                    return steps;
                }
                for(int i=0;i<node.length();i++)
                {
                    for(char c='a';c<='z';c++)
                    {
                        char x=node[i];
                        node[i]=c;
                        if(dict.find(node)!=dict.end())
                        {
                            dict.erase(node);
                            q.push(node);
                        }
                        node[i]=x;
                    }
                }
                n--;
            }
            steps++;
        }
        return 0;
    }
};