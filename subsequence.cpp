## Subsequences of String


#include <bits/stdc++.h> 

void solve(string str, string res, int indx, vector<string>& ans){
    if(indx >= str.length()){
        if(res.length() > 0){
            ans.push_back(res);
        }
        return;
    }
    
//     exclude
    solve(str, res, indx + 1, ans);
    
//     include
    char ch = str[indx];
    res += ch;
    solve(str, res, indx+1, ans);
}
vector<string> subsequences(string str){
    vector<string>ans;
    string res = "";
    int indx = 0;
    solve(str, res, indx, ans);
    return ans;
}


###Sample Input 1:
###1 
###abc
###Sample Output 1:
###a ab abc ac b bc c
