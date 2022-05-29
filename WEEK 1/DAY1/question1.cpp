
//https://leetcode.com/contest/biweekly-contest-79/problems/check-if-number-has-equal-digit-count-and-digit-value/





class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int,int> m;
        for(int i=0;i<num.length();i++){
            m[num[i]-'0']++;
        }
        for(int i=0;i<num.length();i++){
            //int c='0'+num[i];
            if(m[i] != num[i]-'0'){
                return false;
            }
        }
        return true;
    }
};