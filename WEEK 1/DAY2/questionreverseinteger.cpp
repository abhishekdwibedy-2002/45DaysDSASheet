

//https://leetcode.com/problems/reverse-integer/


class Solution {
public:
    int reverse(int x) {
        long a=x;
        long i=0;
        /*if(a<0){
            a=-a;
            while(a>0){
            i=i*10+a%10;
            if(i>INT_MAX || i<INT_MIN)
                return 0;
            a/=10;
            } 
            i=i*-1;
        }
        while(a>0){
            i=i*10+a%10;
            if(i>INT_MAX || i<INT_MIN)
                return 0;
            a/=10;
        }
        return i;*/
        bool neg=false;
        if(a<0){
            a=-a;
            neg=true;
        }
        while(a>0){
            i=i*10+a%10;
            if(i>INT_MAX || i<INT_MIN){
                return 0;
            }
            a/=10;
        }
        if(neg == true)
            return -1*i;
        return i;
    }
};