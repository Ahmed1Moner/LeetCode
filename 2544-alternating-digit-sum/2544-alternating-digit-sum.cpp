class Solution {
public:
    int alternateDigitSum(int n) {
    int res = 0, sign = 1;
    for (; n; n /= 10) {
        sign *= -1;
        res += sign * n % 10;
    }
    return sign * res;
}
};