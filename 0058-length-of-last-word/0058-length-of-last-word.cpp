class Solution {
public:
    int lengthOfLastWord(string s) {
        
        //initilaize a counter
        int counter=0;
        
        //loop over the whole array elements from the end
        for(int i=s.size()-1;i>=0;i--){
            
            //base case 1: if there's an addition space-> break
            if(counter!=0 && s[i]==' ')
                break;
            //base case 2: skip counting if there's a space
            if(s[i]==' ')
                continue;
            //a valid letter-> add 1
            else
                counter++;
        }
        
        //at the end-> return the final counter value
        return counter;
    }
};