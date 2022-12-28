## Letter Combinations of a Phone Number - Leetcode


class Solution {

    void solve(string digits, string s, int indx, vector<string>& ans, string keypad[]){
        if(indx >= digits.length()){
            ans.push_back(s);
            return;
        }

        int ele = digits[indx] - '0';
        string value = keypad[ele];
        for(int i = 0; i < value.length(); i++){
            s.push_back(value[i]);
            solve(digits, s, indx + 1, ans, keypad);
            s.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length() == 0)
            return ans;
        string s = "";
        int indx = 0;
        string keypad[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"} ;
        solve(digits, s, indx, ans, keypad);
        return ans;
    }
};


### Input: digits = "23"
### Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
