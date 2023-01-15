class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        vector<string> ans;
        
        for(int i=1;i<=n;i++){
            
            //case 1: FizzBuzz
            if(i%3==0 && i%5==0){
                ans.push_back("FizzBuzz");
                continue;
            }
            
            //case 2: Fizz
            if(i%3==0){
                ans.push_back("Fizz");
                continue;
            }
            
            //case 3: Buzz
            if(i%5==0){
                ans.push_back("Buzz");
                continue;
            }
            
            if(i%3!=0 && i%5!=0){
                ans.push_back(to_string(i));
                continue;
            }
        }
        
        return ans;
    }
};