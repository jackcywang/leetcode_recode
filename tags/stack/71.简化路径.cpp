/*
 * @lc app=leetcode.cn id=71 lang=cpp
 *
 * [71] 简化路径
 */

// @lc code=start
class Solution {
public:
    string simplifyPath(string path) {
        stack<char>st;
        st.push(path[0]);
        for(int i=1;i<path.size();i++){
            if(st.top()=='/' && path[i]=='/'){
                continue;
            }
            if(path[i]!='.'){
                st.push(path[i]);
            }
            else if(path[i]=='.' && path[i]!=path[i+1]){
                continue;
            }
            else if(path[i]=='.'&& path[i]==path[i+1]){
                if(st.size()!=1){
                    st.pop();
                    while(st.top()!='/'){
                        st.pop();
                    }
                }
                else{
                    continue;
                }
                
            }


        }
        cout<<"st"<<st.size();
        if(st.size()>1 && st.top()=='/'){
            st.pop();
        }
        
        string ans="";
        vector<char>chs;
        while(!st.empty()){
            chs.push_back(st.top());
            st.pop();
        }
        
        for(int i=chs.size()-1;i>=0;i--){
            ans+=chs[i];
        }
        return ans;
    }
};
// @lc code=end

