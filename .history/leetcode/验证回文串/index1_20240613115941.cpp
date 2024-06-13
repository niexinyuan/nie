#include <iostream>
#include <cctype>
#include <string>

using namespace std;

bool isPalindrome(string s) {
    int left = 0;
    int right = s.length() - 1;
    
    while (left < right) {
        // 移动左指针，跳过非字母数字字符
        while (left < right && !isalnum(s[left])) {
            left++;
        }
        // 移动右指针，跳过非字母数字字符
        while (left < right && !isalnum(s[right])) {
            right--;
        }
        
        // 比较字符（忽略大小写）
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }
        
        left++;
        right--;
    }
    
    return true;
}

int main() {
    string s1 = "A man, a plan, a canal: Panama";
    string s2 = "race a car";
    string s3 = " ";

    cout << isPalindrome(s1) << endl; // 输出: 1 (true)
    cout << isPalindrome(s2) << endl; // 输出: 0 (false)
    cout << isPalindrome(s3) << endl; // 输出: 1 (true)

    return 0;
}
