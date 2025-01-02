//Better Solution
class Solution {
public:
    int vowels[26] = {1,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1};
    int maxVowels(string s, int k) {
        int max_vow = 0;
        for (auto i = 0, cur_vow = 0; i < s.size(); ++i) {
            cur_vow += vowels[s[i] - 'a'];
            if (i >= k)
                cur_vow -= vowels[s[i - k] - 'a'];
            max_vow = max(max_vow, cur_vow);
        }
        return max_vow;
    }
};


// My solution
// class Solution {
// public:
//     int maxVowels(string s, int k) {
//         int ans = 0;
//         int count = 0; 
//         string vowels = "aeiou";
//         for (int i = 0; i<k; i++){
//             if (vowels.find(s[i]) != string::npos){
//                 count+=1;
//             }
//         }
//         ans = count;
//         for (int i = k; i<s.size(); i++){
//             if (vowels.find(s[i-k]) != string::npos){
//                 count -= 1;
//             }

//             if (vowels.find(s[i]) != string::npos){
//                 count +=1;
//             }

            
//             ans = max(ans,count);
//         } 
//         return ans;
//     }
// };