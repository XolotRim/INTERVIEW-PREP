
//better solution (copied)
class Solution {
 public:
  string reverseVowels(string s) {
    int l = 0;
    int r = s.length() - 1;

    while (l < r) {
      while (l < r && !isVowel(s[l]))
        ++l;
      while (l < r && !isVowel(s[r]))
        --r;
      swap(s[l++], s[r--]);
    }

    return s;
  }

 private:
  bool isVowel(char c) {
    static constexpr string_view kVowels = "aeiouAEIOU";
    return kVowels.find(c) != string_view::npos;
  }
};



// My First Solution
// class Solution {
    
// public:
//     string reverseVowels(string s) {
//         // "a", "e", "i", "o", "u", "A", "E", "I", "O", "U"
//         set<char> vowel_set = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
//         stack<char> vowel_stack;
//         queue<int> index_queue;
//         for (int i = 0 ; i<s.length() ; i++){
//             if (vowel_set.find(s[i]) != vowel_set.end()){
//                 vowel_stack.push(s[i]);
//                 index_queue.push(i);
//             }
//         }
//         while (!index_queue.empty()){
//             s[index_queue.front()]=vowel_stack.top();
//             index_queue.pop();
//             vowel_stack.pop();
//         }
        
        
//         return s;
//     }
// };