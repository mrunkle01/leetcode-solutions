#include <stdio.h>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans = 0;
        for (string &i : operations){
            if(i == "--X" || i == "X--"){ans-=1;}
            else{ans+=1;}
        }
        return ans;
    }
};