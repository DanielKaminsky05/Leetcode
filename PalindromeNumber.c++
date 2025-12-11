#include <string>
#include <iostream>


class Solution {
public:
    bool isPalindrome(int x) {
        std::string num = std::to_string(x);
        int left = 0;
        int right = num.size() - 1;
        while (left <= right) {
            if (num[left] != num[right]) return false;
            left++;
            right--;
        }
        return true;
    }
};

int main() {
    Solution s;
    std::cout << std::boolalpha << s.isPalindrome(121) << "\n";
    return 0;
}