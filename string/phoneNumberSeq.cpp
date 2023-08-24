#include<iostream>
using namespace std;

string printSeq(string str[], string input){
    string output = "";
    int n = input.length();
    for(int i = 0; i < n; i++){
        if(input[i] == ' '){
            output = output + '0';
        }
        else{
            int pos = 0;
            if(input[i] >= 'a' && input[i] <= 'z'){
                pos = input[i] - 'a';
            }
            else{
                pos = input[i] - 'A';
            }
            output = output + str[pos];
        }
    }
    return output;
}

int main(){
    string str[] = { "2",   "22",  "222", "3",   "33",   "333", "4",
            "44",  "444", "5",   "55",  "555",  "6",   "66",
            "666", "7",   "77",  "777", "7777", "8",   "88",
            "888", "9",   "99",  "999", "9999" };
    string input = "abc";
    cout << printSeq(str, input) << endl;
}