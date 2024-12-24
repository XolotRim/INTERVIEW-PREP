

//Better Solution (copied)
// ABABAB = 6 = 2 x 3
// ABAB   = 4 = 2 x 2
// AB     = 2 = 2 (THIS 2 COMES 3 TIMES IN FIRST AND 2 TIMES IN SECOND WHICH IS THE SOLUTION)
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1) return "";
        int n = __gcd(str1.size(), str2.size());
        return str1.substr(0, n);
    }
};


//My First Solution
// class Solution {
// public:
//     string gcdOfStrings(string str1, string str2) {
//         int min_length = min (str1.length(), str2.length());
//         string shorter_string = "";
//         if (str1.length() == min_length){
//             shorter_string = str1;
//         }
//         else{
//             shorter_string = str2;
//         }
//         string ans = "";
//         for (int i = 0 ; i<shorter_string.length(); i++){
//             string temp_ans = shorter_string.substr(0,i+1);
//             if (str1.length() % temp_ans.length() != 0 || str2.length() % temp_ans.length() != 0 ){
//                 continue;
//             }
//             int str1_iter = str1.length()/temp_ans.length();
//             int str2_iter = str2.length()/temp_ans.length();
//             string comparing_temp = "";
//             for (int j = 0 ; j < str1_iter ; j++){
//                 comparing_temp+=temp_ans;
//             }
//             if ( comparing_temp != str1 ){
//                 continue;
//             }
//             comparing_temp="";
//             for (int j = 0 ; j < str2_iter ; j++){
//                 comparing_temp+=temp_ans;
//             }
//             if ( comparing_temp != str2 ){
//                 continue;
//             }
//             ans=temp_ans;
//         }
//         return ans;
        
//     }
// };