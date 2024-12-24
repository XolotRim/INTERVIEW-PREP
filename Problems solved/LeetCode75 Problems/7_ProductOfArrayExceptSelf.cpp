class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int number_of_zeros = 0;
        int prod = 1;
        for (int num : nums){
            if (num == 0) ++number_of_zeros;
            else prod*=num;
        }
        if (number_of_zeros > 1){
            vector<int> ans(nums.size(), 0);
            return ans;
        }
        else if(number_of_zeros == 1){
            vector<int> ans(nums.size(), 0);
            for ( int i = 0 ; i < nums.size(); i++){
                if (nums[i]==0){
                    ans[i] = prod;
                    break;
                } 
                
            }
            return ans;
        }
        vector<int> prefix(nums.size(), 1);
        vector<int> suffix(nums.size(), 1);
        vector<int> ans(nums.size(), 1);

        for (int i=1 ; i<nums.size() ; i++){
            prefix[i] = prefix[i-1] * nums[i-1];
        }
        for (int i = nums.size()-2; i>=0; i--){
            suffix[i] = suffix[i+1] * nums[i+1];
        }
        for(int i=0; i<nums.size(); i++){
            ans[i] = prefix[i]*suffix[i];
        }
        
        return ans;
    }
};