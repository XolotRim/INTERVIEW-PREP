class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int l = 0;
        int r = height.size() -1;
        int minHeight;
        while( l < r){
            minHeight = min(height[l],height[r]);
            ans = max(ans, minHeight * (r-l));
            if (height[l]<height[r]) l++;
            else r--;
        }
        return ans;
    }
};
// credits to walkcc.me