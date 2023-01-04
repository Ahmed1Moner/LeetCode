class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        //sort the intervals first
        sort(intervals.begin(), intervals.end());
        int counter=0;
        //left & right pointers
        int left=0;
        int right=1;
        
        
        //loop over the whole given intervals
        while(right<intervals.size()){
            
            //case 1: no overlapping
            if(intervals[left][1]<=intervals[right][0]){
                left=right;
                right++;
            }
            
            //case 2
            else if(intervals[left][1]<=intervals[right][1]){
                counter++;
                right++;
            }
            
            else if(intervals[left][1]>intervals[right][1]){
                counter++;
                left=right;
                right++;
            }
        }
        
        //return the final counter value
        return counter;
    }
};
