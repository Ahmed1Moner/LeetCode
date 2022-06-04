class Solution {
public:
    
   //merge sort -> worst: O(n*logn), best: O(n*logn), stable, out-place
    
    //conquer/collect array
    void conquer(vector<int>& nums, int left, int mid, int right){
        //determine the size of the array
        int size=right-left+1;
        //initialize a dynamic-allocated array
        int *nums2=new int[size];
        //initialize 3 pointers, one for each sub-array
        int i=left,j=mid+1,k=0;

        //collection time
        //conquer the array in descending order
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

        //move every element from the new array to the old one
        for(int i=0;i<size;i++){
            nums[left+i]=nums2[i];
        }
        //delete the new array
        delete [] nums2;
    }

    //divide array
    void divide(vector<int>& nums, int left, int right){
        //base case: do until reaching only one element
        if(left<right){
            int mid=left+(right-left)/2;
            divide(nums, left, mid);
            divide(nums, mid+1, right);
            conquer(nums, left, mid, right);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        //calling the function divide, which contains the conquer function, too
        int size=nums.size();
        divide(nums, 0, size-1);
        return nums;
    }
};