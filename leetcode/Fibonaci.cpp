#include <iostream>
using namespace std;

class Solution {
public:
    int fib(int n) {
        int mod=1000000007;
        if(n<=1){
            return n;
        }else{
            int x=0,y=1,z=0;
            for(int i=2;i<n;i++){
                x=y;
                y=z;
                z=(x+y)%mod;
            }
            return z;
        }
        
    }
};