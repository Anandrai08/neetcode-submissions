class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;

        vector<int> count(26,0);

        for(char c:s){
            count[c -'a']++;
        }
        for(char c:t){
            count[c - 'a']--;
        }

        for(int x:count){
            if(x!=0) return false;
        }
        return true;
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());

        // for(int i=0,j=0;i<s.size();i++){
        //     if(s[i]!=t[j]){
        //         return false;
        //     }
        //     j++;
        // }
        // return true;
    }
};
