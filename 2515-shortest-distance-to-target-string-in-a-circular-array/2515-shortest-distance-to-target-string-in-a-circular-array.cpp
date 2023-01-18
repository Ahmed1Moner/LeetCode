class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        
        int minDis=INT_MAX;
        int size=words.size();
        
        //loop over the whole array elements
        for(int i=0;i<size;i++)
            
            //if the target is found
            if(words[i]==target)
                //get the minimum distance between the left & right / circular distance to the goal from the given index
                minDis=min(minDis, min(abs(startIndex-i), size-abs(startIndex-i)));
        
        //if not found-> -1
        return minDis==INT_MAX ? -1 : minDis;

    }
};
