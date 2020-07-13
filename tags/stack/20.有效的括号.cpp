/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        if(s.size()==0) return true;
        if(s.size()==1) return false;
        stack<char>lists;
        for(auto c:s){
            if(c=='('){
                lists.push(')');
            }
            else if(c=='['){
                lists.push(']');
            }
            else if(c=='{'){
                lists.push('}');
            }
            else
            {
                if(lists.empty()) return false;
                char ch = lists.top();
                if(ch==c){
                    lists.pop();
                }
                else{
                    return false;
                }
                
            }
            
            
        }
        return lists.empty();


    }
};
// @lc code=end

