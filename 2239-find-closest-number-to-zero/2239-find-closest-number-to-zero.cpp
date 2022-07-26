class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        //initialize two variables, one for the number of steps from 0 & one to store the minimum value reached
        int step=0,min=INT_MAX,num=0;
        
        //loop over the whole array elements
        for(int n:nums){
            //get the number of steps from 0 to the current number
            step=abs(n);
            
            //store the min possible value
            if(step<min){
                min=step;
                num=n;
            }
            //if there's two elements with the same number of steps-> return the max one bewteen the two numbers
            else if(step==min)
                num=max(n,num);
        }
        
        //return the minimum value
        return num;
    }
};