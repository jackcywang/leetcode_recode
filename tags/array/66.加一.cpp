/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int num=1;
        for(int i=digits.size()-1;i>=0;i--){
            num+=digits[i];
            digits[i] = num%10;
            num/=10;
            if(!num){
                break;
            }
        }
        if(num==1){
            digits.resize(digits.size()+1,0);
            digits[0]=1;
        }
        return digits;
    }
};

/*
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
        vector<int> ans(len+1);
        if(len>1){
            if(digits[len-1]<9){
            digits[len-1]+=1;
            return digits;
            }
            else
            {
                int flag = 1;
                digits[len-1] = 0;
                for(int i=len-2;i>=0;i--){
                    int sum = digits[i]+flag;
                    flag = sum/10;
                    int mode = sum%10;
                    digits[i]=mode;
                }
                if(flag==0){
                    return digits;
                }
                else
                {
                    ans[0]=flag;
                    for(int i=0;i<=len-1;i++){
                        ans[i+1] = digits[i];
                    }
                }
            }
            }
        else
        {
            if(digits[0]<9){
                digits[0]+=1;
                return digits;
            }
            else
            {
                ans={1,0};
            }
            
        }
        
        
        return ans;
        

    }
};*/
// @lc code=end

