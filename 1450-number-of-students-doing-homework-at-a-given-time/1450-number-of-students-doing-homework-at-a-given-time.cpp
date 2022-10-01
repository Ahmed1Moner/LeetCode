class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        
        //initialize a counter
        int counter=0;
        
        //loop over the whole array elements
        for(int i=0;i<startTime.size();i++)
            //check if the current value lays between the two intervals
            if(queryTime>=startTime[i])
                if(queryTime<=endTime[i])
                    //if yes-> add the counter by one
                    counter++;
        
        //return the final counter value
        return counter;
    }
};