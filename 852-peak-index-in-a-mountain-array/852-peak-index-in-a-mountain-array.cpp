class Solution {
public:
    
    int peakIndexInMountainArray(vector<int>& arr) {
        
        //handle invalid cases
        if(arr.size()<3)
            return 0;
        
        //initialize two main pointers-> one on the first element in the array & one on the last one
        int left=0, right=arr.size();
        
        //loop while the left pointer is before the right one
        while(left<right){
            
            //the third pointer mid-> is exactly the middle element between the main two ones
            int mid=left+(right-left)/2;
            
            //check if the middle pointer value is greater than the next one
            if(arr[mid]>arr[mid+1])
            //case 1: if yes-> move the right pointer to the mid position
               right=mid;
            else
                //case 2: if not-> move the left pointer to the position after the mid one
                left=mid+1;
        }
        
        //return the left position
        return left;
    }
};