class Solution {
public:
    int maxArea(vector<int>& heights) {
       int first=0;
       int last=heights.size()-1;
       int maxarea=0;
       while(first<=last)
       {
            int area=min(heights[first],heights[last])*(last-first);
            if(area>=maxarea)
            {
                maxarea=area;
            }
            if(heights[first]>heights[last])
            {
                last--;
            }
            else
            {
                first++;
            }
       }
       return maxarea;
    }
};
