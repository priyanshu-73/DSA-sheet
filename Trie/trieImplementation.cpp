#include<iostream>
using namespace std;

class trieNode{
    public:
        char data;
        bool isLeaf;
        trieNode* children[26];

        trieNode(char ch){
            data = ch;
            isLeaf = false;
            for(int i = 0; i < 26; i++)
                children[i] = NULL;
        }
};

class trie{
    public:
        trieNode* root;

        trie(){
            root = new trieNode('\0');
        } 

        void insert(trieNode* root, string word){
            if(word.length() == 0){
                root -> isLeaf = true;
                return;
            }

            int index = word[0] - 'A';
            trieNode* child;
            if(root -> children[index] != NULL)
                child = root -> children[index];
            else{
                child = new trieNode(word[0]);
                root -> children[index] = child;
            }

            insert(child, word.substr(1));
        }

        bool search(trieNode* root, string word){
            if(word.length() == 0){
                return root -> isLeaf;
            }

            int index = word[0] - 'A';
            trieNode* child;
            if(root -> children[index] != NULL)
                child = root -> children[index];
            else
                return false;

            return search(child, word.substr(1));
        }
};

int main(){
    trie t;
    trieNode* root = t.root;
    string word = "HELLO";
    t.insert(root, word);
    cout << t.search(root, word);
}