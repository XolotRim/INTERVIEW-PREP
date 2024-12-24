class Solution {
public:
    string reverseWords(string s) {
        
        string ans="";
        int word_length = 0;
        int startindex=0;
        bool not_to_add_space = true;
        for (int i = 0; i < s.length() ; i++){
            if(s[i]==' ') continue;
            word_length = 0;
            startindex=i+1;
            while(s[i]!=' ' && i!=s.length()-1) ++i;
            if (i == s.length()-1 ){
                if (s[i]==' ') word_length = i-startindex+1;
                else word_length = i-startindex+1+1;
            } 
            else word_length = i - startindex + 1;

            if(not_to_add_space){
                ans = s.substr(startindex-1,word_length) + ans;
                not_to_add_space = false;
            } 
            else ans = s.substr(startindex-1,word_length) + " " + ans;
        }
        return ans;
    }
};

// Better SOlution ( way advance includes recurrsion, not touching right now)
// class Solution {
//  public:
//   string reverseWords(string s) {
//     ranges::reverse(s);                 // Reverse the whole string.
//     reverseWords(s, s.length());        // Reverse each word.
//     return cleanSpaces(s, s.length());  // Clean up the spaces.
//   }

//  private:
//   void reverseWords(string& s, int n) {
//     int i = 0;
//     int j = 0;

//     while (i < n) {
//       while (i < j || i < n && s[i] == ' ')  // Skip the spaces.
//         ++i;
//       while (j < i || j < n && s[j] != ' ')  // Skip the spaces.
//         ++j;
//       reverse(s.begin() + i, s.begin() + j);  // Reverse the word.
//     }
//   }

//   // Trim leading, trailing, and middle spaces
//   string cleanSpaces(string& s, int n) {
//     int i = 0;
//     int j = 0;

//     while (j < n) {
//       while (j < n && s[j] == ' ')  // Skip the spaces.
//         ++j;
//       while (j < n && s[j] != ' ')  // Keep non spaces
//         s[i++] = s[j++];
//       while (j < n && s[j] == ' ')  // Skip the spaces.
//         ++j;
//       if (j < n)  // Keep only one space.
//         s[i++] = ' ';
//     }

//     return s.substr(0, i);
//   }
// };