class Solution {
public:
    int minimumSum(int num) {
        
        //initialize a vector
        vector<int>v;
        
        //push each digit in the vector
        while(num!=0){
            v.push_back(num%10);
            num/=10;
        }
        
        //2931->2913
        //1-2-3-9
        
        //sort the vector elements
        sort(v.begin(), v.end());
        
        int num1=v[0]*10+v[v.size()-1];
        int num2=v[1]*10+v[v.size()-2];
        
        //return the sum of the numbers
        return num1+num2;
    }
};

