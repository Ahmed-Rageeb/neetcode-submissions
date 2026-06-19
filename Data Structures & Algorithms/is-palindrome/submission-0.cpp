class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        for(int i=0;i<(s.length());i++)
        {
            if(!isalnum(s[i]))
            {
                continue;
            }
            temp+=tolower(s[i]);

        }
        for(int i=0;i<(temp.length())/2;i++)
        {
            
            if(temp[i]==temp[temp.length()-1-i])
            {
                continue;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};
