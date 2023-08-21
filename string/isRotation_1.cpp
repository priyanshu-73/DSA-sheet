#include<queue>
#include<iostream>
#include<vector>
using namespace std;

bool isRotation(string str1, string str2){
    if(str1.size() != str2.size())
        return false;
    
    string temp = str1 + str1;
    return temp.find(str2) != string :: npos;  
}


int main(){
    string str1 = "AACD", str2 = "ADCA";
    cout << isRotation(str1, str2);
}