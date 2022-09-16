class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        //since the array elements are strictly incresing, we'll llop over the whole array elements & count the number of the elements which are smaller than the given kth missing integer & add them to it
        
        for(int num:arr)
            if(num<=k)
                k++;
        return k;
        
    }
};


// class Solution {
// public:
//     int findKthPositive(vector<int>& arr, int k) {
        
//         //handle invalid cases
//         if(k<=0)
//             return 0;
        
//         //initialize mainly two pointers-> one on the first element in the array & one on last one
//         int left=0, right=arr.size();
        
//         //loop while the left pointer is before the right one
//         while(left<right){
            
//             //the third pointer mid-> is exactly the middle element between the main two ones
//             int mid=left+(right-left)/2;
            
//             //check the number of the missing elements
//             if((arr[mid]-mid-1)<k)
//                 //case 1: if still smaller than k-> move the left pointer to the position after the mid one
//                 left=mid+1;
//             else
//                 //case 2: if not, valid-> move the right pointer to the mid position
//                 right=mid;
//         }
        
//         //return the left position + the kth index
//         return left+k;
//     }
// };
