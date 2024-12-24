class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int next=0;
        int prev=0;
        int prev_plotted = 0;
        for (int i=0; i<flowerbed.size();i++){
            if(flowerbed[i]==1) continue;
            if(n==0) break;
            if(i-1>=0){
                prev=flowerbed[i-1] + prev_plotted;
                prev_plotted = 0;
            } 
            if(i+1<flowerbed.size()) next=flowerbed[i+1]; else next=0;
            if (prev+next==0){
                --n;
                prev_plotted = 1;
            }             
        }
        return n==0;
    }
};