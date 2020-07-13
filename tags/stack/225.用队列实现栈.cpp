/*
 * @lc app=leetcode.cn id=225 lang=cpp
 *
 * [225] 用队列实现栈
 */

// @lc code=start
class MyStack {
public:
    queue<int> dataque;
    /** Initialize your data structure here. */
    MyStack() {

    }
    
    /** Push element x onto stack. */
    void push(int x) {
        int size = dataque.size();
        dataque.push(x);
        while (size--)
        {
            int tmp = dataque.front();
            dataque.pop();
            dataque.push(tmp);
        }
        
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int res = dataque.front();
        dataque.pop();
        return res;
    }
    
    /** Get the top element. */
    int top() {
        return dataque.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return dataque.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
// @lc code=end

