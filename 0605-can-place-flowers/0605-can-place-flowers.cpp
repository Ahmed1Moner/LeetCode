class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        flowerbed.push_back(0);
        flowerbed.insert(flowerbed.begin(), 0);
        
        for(int i=1;i<flowerbed.size()-1;i++){
            
            if(flowerbed[i-1]+flowerbed[i]+flowerbed[i+1]==0){
                i++;
                n--;
            }
        }
        
        return n<=0;
        
    }
};