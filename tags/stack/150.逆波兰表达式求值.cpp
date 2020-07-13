/*
 * @lc app=leetcode.cn id=150 lang=cpp
 *
 * [150] 逆波兰表达式求值
 */

// @lc code=start
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>list1;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                int res;
                int num1 = list1.top();
                list1.pop();
                int num2 = list1.top();
                list1.pop();

                if(tokens[i]=="+"){
                    res = num2+num1;
                }
                else if(tokens[i]=="-"){
                    res = num2-num1;
                }
                else if(tokens[i]=="*"){
                    res = num2*num1;
                }
                else
                {
                    res = num2/num1;
                }
                list1.push(res);
                
            }
            else
            {
                list1.push(atoi(tokens[i].c_str()));
            }
            
        }
        cout<<list1.size();
        return list1.top();

        
    }
};
// @lc code=end

