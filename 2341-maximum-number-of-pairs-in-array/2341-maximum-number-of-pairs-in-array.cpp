class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        //initialize a new vector to store the results in
        vector<int> answer;
        int pairs=0;
        //sort the vector elements in ascending order
        sort(nums.begin(),nums.end());

        //loop over the whole vector elements until the second last one
        for(int i=0;i<nums.size()-1;i++){
            //check if the current element is equal to the next one
            if(nums[i]==nums[i+1]){
                //add the pairs counter by one
                pairs++;
                //to avoid adding the counter by an additional one if there's a number who repeated odd number & as the numbers begins from zero-> replace the counted pairs by -1
                nums[i]=-1;
                nums[i+1]=-1;
            }
        }
        
        //push in the new vector the number of the pairs first
        answer.push_back(pairs);
        //then, the number of the left unpaired elements-> the difference between the number of the elements in the given array & the double of the pairs counter
        answer.push_back(nums.size()-(pairs*2));
        
        //return the new vector values
        return answer;
    }
};