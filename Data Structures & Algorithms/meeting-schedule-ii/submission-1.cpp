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
        sort(intervals.begin(),intervals.end(),[](Interval a , Interval b)
        {
            return a.start<b.start;
        }        
        );
        priority_queue<int,vector<int>,greater<int>>q;
        for(auto inter:intervals)
        {
            if(q.size()!=0 && q.top()<inter.start)
            {
                q.pop();
            }
            q.push(inter.end);
        }
        return q.size();
    }
};
