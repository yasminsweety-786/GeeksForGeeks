class Solution {
  public:
    bool findPattern(string& s) {
        int matcher = 0;
        for(char ch: s){
            if(matcher < 0 )
                break;
            else if(ch == 'x')
                matcher++;
            else
                matcher--;
        }
        return matcher == 0;
    }
};