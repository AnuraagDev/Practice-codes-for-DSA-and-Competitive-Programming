class Solution {
public:
    bool isValid(string s) {
        int open=0,close=0;
        for(int i=0;i<s.size();i++)
        {
            if(s.at(i)=='(')open++;
            if(s.at(i)==')')close++;
            if(i!=s.size()-1)
            {
                if(close>open)return false;
            }
            if(i==s.size()-1){
                if(close!=open)return false;
            }
        }
        return true;
    }
};
