 /*
 Input: words = ["gin", "zen", "gig", "msg"]
Output: 2
Explanation: 
The transformation of each word is:
"gin" -> "--...-."
"zen" -> "--...-."
"gig" -> "--...--."
"msg" -> "--...--."

There are 2 different transformations, "--...-." and "--...--.".
 */
#include<bits/stdc++.h>
#include<vector>
#include<set>
using namespace  std;

int uniqueMorseRepresentations(vector<string>& words) {
        set<string> decode_string;
        vector<string> morse_code = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        for(auto word : words){
            string t = "";
            for(auto c : word){
                t += morse_code[c - 'a'];
            }
            decode_string.insert(t);
        }
        return decode_string.size();
    }
    int main()
    {  int n;
       cin>>n;

        vector<string> words;
        for(int i=0;i<n;i++)
        {   string input;
            cin>>input;
           words.push_back(input);

        }
        cout<<uniqueMorseRepresentations(words);
    return 0;

    }