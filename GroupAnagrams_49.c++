#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <iostream>
using namespace std;


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hashmap;
        for (string& s: strs) {
            string sCopy = s;
            sort(sCopy.begin(), sCopy.end());
            hashmap[sCopy].push_back(s);
        }
        vector<vector<string>> ans;
        for (const auto& pair: hashmap) {
            ans.push_back(pair.second);
        }
        return ans;
    }


};