class Solution {
public:
    void sortColors(vector<int>& nums) {
        //using boolean flag with defaul value of true
        bool check;
        
        //looping over the whole array
        for(int i=0;i<nums.size()-1;i++){
            
            //looping over the whole array for each single big loop
            for(int j=0;j<nums.size()-i-1;j++){
                //compare numbers, if one bigger than the next, swap them, as soring in ascending order
                if(nums[j]>nums[j+1]){
                    int temp=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;
                    //if it already did a swap, close the flag
                    check=false;
                }
            }
            //if it doesn't enter the loop which means that the array is already sorted, close the flag
            if(check){break;}
        }
    }
};