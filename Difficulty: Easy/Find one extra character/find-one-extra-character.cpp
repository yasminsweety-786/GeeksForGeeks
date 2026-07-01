class Solution {
  public:
    char extraChar(string s1, string s2) {
        // code here
         int hash[26] = {0};
    for(auto ch : s2){
        hash[ch-'a']++;
    }
    for(auto ch : s1){
        hash[ch-'a']--;
    }
    char ans ;
    for(int i = 0;i<26;i++){
        if(hash[i]>0) ans = i + 'a';
    }
    return ans;
    
    }
};