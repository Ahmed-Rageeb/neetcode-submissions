class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>m;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
        }
        for(int i=0;i<t.length();i++)
        {
            if(m.find(t[i])==m.end())
            {
                return false;
            }
        }
        return true;
    }
};
