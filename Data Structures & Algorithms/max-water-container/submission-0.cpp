class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans=0;
        int first=0;
        int area=0;
        for(int i=1;i<heights.size();i++)
        {
           
            if(heights[i]>heights[first])
            {
                first=i;
                area=(i-first)* heights[first];
            }
            else
            {
                area=(i-first)* heights[i];
            }
            if(area>=ans)
            {
                ans=area;
            }
            
        }
        return ans;
    }
};
