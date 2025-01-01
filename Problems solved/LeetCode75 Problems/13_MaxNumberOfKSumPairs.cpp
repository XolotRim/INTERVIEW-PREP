// O(LogN)
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int l = 0;
        int r = nums.size()-1;
        int operations = 0;
        int sum = 0;
        while( l < r ) {
            sum = nums[l] + nums[r];
            if (sum == k){
                operations++;
                l++;
                r--;
            }
            else if(sum < k){
                l++;
            }
            else{
                r--;
            }
        } 
        return operations;
    }
};



// O(N)
// class Solution {
// public:
//     int maxOperations(vector<int>& nums, int k) {
//         if (nums.size() < 2 || k < 1) return 0;
//         int count = 0;
//         unordered_map<int, int> map;
//         for (int num : nums) {
//             int temp = k - num;
//             if (map.find(temp) != map.end() && map[temp] > 0) {
//                 // If yes, increment the count as a pair is found
//                 count++;
//                 map[temp]--;
//                 // If frequency reaches 0, we can optionally erase it
//                 if (map[temp] == 0) {
//                     map.erase(temp);
//                 }
//             } else {
//                 map[num]++;
//             }
//         }
//         return count;
//     }
// };
