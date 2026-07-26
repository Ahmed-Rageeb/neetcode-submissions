class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int temp=0;
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
            map<char,int>m;
            for(int j=i;j<s.length();j++)
            {
                if(m.find(s[j])==m.end())
                {
                    m[s[j]]++;
                    temp++;
                }
                else
                {
                    break;
                }

            }
            
            if(temp>ans)
            {
                    ans=temp;
            }
            temp=0;                          
        }
        return ans;
    }
};
