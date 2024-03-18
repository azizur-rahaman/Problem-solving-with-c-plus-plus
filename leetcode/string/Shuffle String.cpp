class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string result(s.length(), '0');

        for(int i=0; i<s.length(); i++){
            result[indices[i]]=s[i];
        }

        return result;
    }
};



//? Using Map

// class Solution {
// public:
//     string restoreString(string s, vector<int>& indices) {
//         map<int,char> mp;

//         for(int i=0; i<s.length(); i++){
//             mp[indices[i]] = (char)s[i];
//         }

//         string ss;

//         for(auto it : mp){
//             ss += it.second;
//         }

//         return ss;
//     }
// };