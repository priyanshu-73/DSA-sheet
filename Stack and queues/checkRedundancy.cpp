#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

bool checkRedundancy(string &s){
    stack<char> st;
    for(auto i : s){
        if(i == '(' || i == '+' || i == '*' || i == '/' || i == '-')
            st.push(i);
        else{
            bool isRedundant = true;
            char temp = st.top();
            if(temp == '+' || temp == '*' || temp == '/' || temp == '-')
                isRedundant = false;
            if(isRedundant == true)
                return true;
        }
    }
    return false;
}

void findRedundant(string& str)
{
    bool ans = checkRedundancy(str);
    if (ans == true)
        cout << "Yes\n";
    else
        cout << "No\n";
}

int main()
{
    string str = "(a+b)";
    findRedundant(str);
    return 0;
}