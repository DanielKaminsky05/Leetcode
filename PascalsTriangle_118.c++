#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> generate(int numRows) {
        std::vector<std::vector<int>> ans;
        for (int i = 0; i < numRows; i++) {
            std::vector<int> temp;
            if (i == 0) ans.push_back({1});
            else if (i == 1) ans.push_back({1, 1});
            else {
                std::vector<int> prev = ans[i - 1];
                for (int j = 0; j <= i; j++) {
                    if (j == 0 or j == i) temp.push_back(1); 
                    else {
                        temp.push_back(prev[j] + prev[j-1]);
                    }
                }
                ans.push_back(temp);
            }
        }
        return ans;
    }
};