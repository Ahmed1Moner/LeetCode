class Solution {
public:
    bool isSameAfterReversals(int num) {
        //check first condition-> if the given number is zero, ok
        if(num==0){
            return true;
        }
        //check second condition-> if the leading element is zero, no
        if(num%10==0){
            return false;
        }
        //check third condition-> the previous two conditions are true, ok
        else{
            return true;
        }
    }
};