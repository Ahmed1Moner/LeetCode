class Solution {
public:
    int solve(int n)
    {
        int s=0;
        while(n>0)
        {
            s+=n%10;
            n/=10;
        }
        return s;
    }
    int differenceOfSum(vector<int>& nums) {
        int element_sum=0,digit_sum=0;
        for(auto n:nums)
        {
            element_sum+=n;
            digit_sum+=solve(n);
        }
        return abs(element_sum-digit_sum);
    }
};