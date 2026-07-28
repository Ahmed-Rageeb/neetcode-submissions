class Solution {
public:
    int characterReplacement(string s, int k) {
        map<char,int>m;
        int ans=0,maxf=0;
        int l=0;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
            maxf=max(maxf,m[s[i]]);
            while((i-l+1)-maxf>k)
            {
                m[s[l]]--;
                l++;
            }
            ans=max(ans,(i-l+1));
        }
        return ans;
    }
};
