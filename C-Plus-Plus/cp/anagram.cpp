//C++ Program to check whether two strings entered by the user are anagrams or not.
/* 
What are Anagram Strings?
Anagram Strings are the strings which have same alphabets but different in order of the alphabets after reodering the string.
For Example - 
Input =
string_1 - aabbcc
string_2 - abcabc
Output = 
string_1 and string_2 are Anagrams. 
*/

/* 
Logic -:
1. We will input the strings from the user.
2. Sorting the input strings 
3. If the strings are same and equal we will return 1 (true) otherwise, we will return 0 (false).
*/

/*................................ANAGRAM OR NOT...................................*/

#include<bits/stdc++.h>
using namespace std;

bool anagrams_or_not(string string_1, string string_2);

//driver code
int main(){

    //taking the input from the user 
    string string_1,string_2;
    cout<<"Enter string 1 = ";
    getline(cin,string_1);
	cout<<"Enter String 2 = ";
	getline(cin,string_2);

    //calling the anagram_or_not function to check the strings 
    if(anagrams_or_not(string_1, string_2)){
        cout<<"Strings are Anagrams";
    }
    else{
        cout<<"Strings are not Anagrams";
    }
    return 0;

}

//function to check if the given strings are anagrams or not 
bool anagrams_or_not(string string_1, string string_2){

    //get length of both the input strings 
    int length_1 = string_1.length();
    int length_2 = string_2.length();

    //checking the length of both strings, if they are not same then return false (0) 
    if(length_1 != length_2){
        return false;
    }

    //sorting both the input strings using inbuilt sort() function
    sort(string_1.begin(), string_1.end());
    sort(string_2.begin(), string_2.end());

    //comparing both the strings 
    //if true then the strings are anagrams otherwise they are not 
    for(int i = 0; i < length_1; i++){
        if(string_1 != string_2){
            return false;
        }
        else{
            return true;
        }
    }
}
