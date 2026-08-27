#include <cctype>
#include <string>

class Solution {
public:
    bool isPalindrome(std::string s) {
        int left = 0;
        int right = static_cast<int>(s.size()) - 1;

        while (left < right) {
            while (left < right && !isAlphanumeric(s[left])) {
                ++left;
            }
            while (left < right && !isAlphanumeric(s[right])) {
                --right;
            }

            if (toLower(s[left]) != toLower(s[right])) {
                return false;
            }

            ++left;
            --right;
        }

        return true;
    }

private:
    static bool isAlphanumeric(char character) {
        return std::isalnum(static_cast<unsigned char>(character)) != 0;
    }

    static char toLower(char character) {
        return static_cast<char>(
            std::tolower(static_cast<unsigned char>(character)));
    }
};
