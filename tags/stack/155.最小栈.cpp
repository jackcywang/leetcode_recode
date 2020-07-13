/*
 * @lc app=leetcode.cn id=155 lang=cpp
 *
 * [155] 最小栈
 */

// @lc code=start
class MinStack {
public:
    stack<int> datastack;
    stack<int> minstack;
    /** initialize your data structure here. */
    MinStack() {
        minstack.push(INT_MAX);
    }
    
    void push(int x) {
        datastack.push(x);
        minstack.push(min(x,minstack.top()));
    }
    
    void pop() {
        datastack.pop();
        minstack.pop();
    }
    
    int top() {
        return datastack.top();
    }
    
    int getMin() {
        return minstack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end

