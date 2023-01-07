class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int start=0;
        int total=0;
        int totalAll=0;
        
        for(int i=0;i<gas.size();i++){
            
            totalAll+=(gas[i]-cost[i]);
            total+=(gas[i]-cost[i]);
            
            if(total<0){
                start=i+1;
                total=0;
            }
        }
        
        if(totalAll<0)
            return -1;
        else
            return start;
    }
};