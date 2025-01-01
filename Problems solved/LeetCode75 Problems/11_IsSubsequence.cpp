class Solution {
public:
    bool isSubsequence(string s, string t) {
        int index_s=0;
        int index_t = 0;
        while(index_s < s.length()){
            if (index_t==t.length()) return false;
            if (s[index_s]==t[index_t]){
                index_s++;
                index_t++;
            }
            else{
                index_t++;
            }
        }
        return true;
    }
};