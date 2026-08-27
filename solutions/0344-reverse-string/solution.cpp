#include <cstddef>
#include <utility>
#include <vector>

class Solution {
public:
    void reverseString(std::vector<char>& s) {
        std::size_t left = 0;
        std::size_t right = s.size();

        while (left < right) {
            --right;
            if (left >= right) {
                break;
            }

            std::swap(s[left], s[right]);
            ++left;
        }
    }
};
