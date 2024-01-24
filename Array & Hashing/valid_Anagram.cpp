// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

// Example 1:

// Input: s = "anagram", t = "nagaram"
// Output: true
// Example 2:

// Input: s = "rat", t = "car"
// Output: false

#include<iostream>
#include<unordered_map>
using namespace std;
bool isAnagram(string s, string t){
    unordered_map<char, int> s1;
    unordered_map<char, int> t1;

    if(s.length() != t.length()){
        return false;
    }

    for(int i=0; i<s.size(); i++){
        s1[s[i]]++;
        t1[t[i]]++;
    }

    for(int i=0; i<s1.size(); i++){
        if(s1[i] != t1[i]){
            return false;
        }
    }
    return true;
}

int main(){
    string s = "anagram";
    string t = "nagaram";
    if(isAnagram(s,t)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}