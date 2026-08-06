class Solution {
public:
    string minWindow(string s, string t) {
        map<char,int>m,m1;
        for(int i=0;i<t.length();i++)
        {
            m[t[i]]++;
        }
        int need=m.size();
        int minlen=INT_MAX;
        int l=0;
        pair<int,int> index={-1,-1};
        int have=0;
        for(int i=0;i<s.length();i++)
        {
            m1[s[i]]++;
            if(m.find(s[i])!=m.end() && m[s[i]]==m1[s[i]])
            {
                have++;
            }
            while(have==need)
            {
                if(minlen>i-l+1)
                {
                    minlen=i-l+1;
                    index={l,i};
                }
                m1[s[l]]--;
                if(m.find(s[l])!=m.end() && m[s[l]]>m1[s[l]])
                {
                    have--;
                }
                l++;
            }
        }

        return minlen==INT_MAX? "":s.substr(index.first,minlen);
    }
};
