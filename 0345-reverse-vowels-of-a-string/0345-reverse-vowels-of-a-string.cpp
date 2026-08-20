class Solution {
public:
    string reverseVowels(string s) {
        string word = s, vowel = "aeiouAEIOU";
        int i = 0, j = s.size() - 1;
        while( i < j){
            while(i < j && vowel.find(word[i]) == string::npos){
                i++;
            }
            while(i<j && vowel.find(word[j]) == string::npos){
                j--;
            }
            swap(word[i], word[j]);
            i++; j--;
        }
        return word;
    }
};