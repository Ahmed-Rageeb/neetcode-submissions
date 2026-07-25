/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        int ans=0;
        sort(intervals.begin(),intervals.end(),[](Interval a,Interval b)
        {
            if(a.start==b.start)
            {
                return a.end>b.end;
            }
            return a.start<b.start;
        }        
        );
        int count=1;
        int l=intervals[0].start,r=intervals[0].end;
        for(int i=0;i<intervals.size();i++)
        {
            if(l<=intervals[i].start && r>intervals[i].end)
            {
                count++;
                l=intervals[i].start;
                r=intervals[i].end;
            }
            else
            {
                l=intervals[i].start;
                r=intervals[i].end;
            }
        }
        return count;
    }
};
