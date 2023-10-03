#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

class Solution{
public:
   void insertAtBottom(stack<int> &st, int item) {  
    if (st.empty()) {  
        st.push(item); 
        return;
    }  
       int top = st.top();  
       st.pop();
        insertAtBottom(st,item);  
        st.push(top);  
    
   }  
    
    void Reverse(stack<int> &st){
        if(st.size()==1) return;
        if(st.empty()) return;
         
         int temp = st.top();
         st.pop();
        Reverse(st);  
        insertAtBottom(st,temp);  
    
        return;
    }
};