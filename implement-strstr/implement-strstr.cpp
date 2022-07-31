class Solution {
public:
    int strStr(string haystack, string needle) {
     
        //base case: if the neddle is an empty string-> return 0
        if(needle.size()==0) return 0;
        //initialize two pointers
        int i=0, j=0;
        
        //loop over the whole two strings' characters
        while(i<haystack.size() && j<needle.size()){
            //case 2: if the two letters are the same ones-> move each pointer to the next letter position
            if(haystack[i]==needle[j]){
                j++;
                i++;
                
                //if the two strings are equal-> return the difference between the pointer counts and the string's size-> almost return 0
                if(j==needle.size()){
                    return i-needle.size();
                }
            }
            //case 3: if the two letters are'not the same-> return the needle's pointer to the beggining point & the first pointer to the poisition where the different letters are found
            else{
                i=i-j+1;
                j=0;
            }
        }
        
        //after that, if there's no equal letters-> return -1
        return -1;
    }
};