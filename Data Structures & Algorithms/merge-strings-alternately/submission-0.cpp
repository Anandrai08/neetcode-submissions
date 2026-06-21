class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str;
        int i = 0, j = 0;

        while (i < word1.size() && j < word2.size()) {
            str += word1[i];
            str += word2[j];
            i++;
            j++;
        }

        str += word1.substr(i);
        str += word2.substr(j);

        return str;
    }
};