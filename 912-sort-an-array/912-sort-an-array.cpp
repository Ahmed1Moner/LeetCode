class Solution {
public:
       
        
        void conquer(vector<int>& nums, int left, int mid, int right){
            int size=right-left+1;
            int *nums2=new int[size];
            int i=left,j=mid+1,k=0;
            
            while(i<=mid&&j<=right){
                if(nums[i]<nums[j]){
                    nums2[k]=nums[i];
                    i++;
                }
                else{
                    nums2[k]=nums[j];
                    j++;
                }
                k++;
            }
            
            while(i<=mid){
                nums2[k]=nums[i];
                i++;
                k++;
            }
            while(j<=right){
                nums2[k]=nums[j];
                j++;
                k++;
            }
            
            for(int i=0;i<size;i++){
                nums[left+i]=nums2[i];
            }
            delete [] nums2;
        }
        
        void divide(vector<int>& nums, int left, int right){
            if(left<right){
                int mid=left+(right-left)/2;
                divide(nums, left, mid);
                divide(nums, mid+1, right);
                conquer(nums, left, mid, right);
            }
        }
    
    vector<int> sortArray(vector<int>& nums) {
        int size=nums.size();
       divide(nums, 0, size-1);
        return nums;
    }
};