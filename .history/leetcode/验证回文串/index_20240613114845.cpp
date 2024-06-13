#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>

bool isPalindrome(std::string s) {
    // 转换为小写
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);

    // 移除非字母数字字符
    std::string filtered;
    for (char c : s) {
        if (std::isalnum(c)) {
            filtered += c;
        }
    }

    // 使用双指针检查是否为回文串
    int left = 0;
    int right = filtered.size() - 1;
    while (left < right) {
        if (filtered[left] != filtered[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    std::string s1 = "A man, a plan, a canal: Panama";
    std::cout << (isPalindrome(s1) ? "true" : "false") << std::endl; // 输出: true

    std::string s2 = "race a car";
    std::cout << (isPalindrome(s2) ? "true" : "false") << std::endl; // 输出: false

    std::string s3 = " ";
    std::cout << (isPalindrome(s3) ? "true" : "false") << std::endl; // 输出: true

    return 0;
}
