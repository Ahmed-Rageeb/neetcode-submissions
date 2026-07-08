class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](vector<int>a,vector<int>b)
        {
            if(a[0]==b[0])
            {
                return a[1]>b[1];
            }
            return a[0]<b[0];
        }      
        );
        for(int i=0;i<intervals.size();i++)
        {
            cout<<intervals[i][0]<<" "<<intervals[i][1]<<" ";
        }
        int count=0;
        int l=intervals[0][0],r=intervals[0][1];
        for(int i=1;i<intervals.size();i++)
        {
            if(l<=intervals[i][0] && r>intervals[i][0])
            {
                count++;
                if(r>intervals[i][1])
                {
                    l=intervals[i][0];
                    r=intervals[i][1];
                }

            }
            else
            {
                l=intervals[i][0];
                r=intervals[i][1];
            }
        }
        return count;
    }
};
