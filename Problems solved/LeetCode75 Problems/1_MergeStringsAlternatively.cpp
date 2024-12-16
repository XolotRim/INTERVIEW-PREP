class Solution {
    public:
        string mergeAlternatively(string word1, string word2) {
            int max_length = max(word1.length(),word2.length());
            string ans = "";
            for (int i = 0 ; i < max_length ; i++){
                if (i < word1.length()){
                    ans+=word1[i];
                }
                if (i < word2.length()){
                    ans+=word2[i];
                }
            }
            return ans;

        }
}