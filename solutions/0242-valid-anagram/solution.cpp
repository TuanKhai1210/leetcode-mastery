#include <array>
#include <string>

using namespace std;

// Reviewed version of the learner's Week 2 submission.
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        array<int, 26> frequency{};

        for (char c : s) {
            ++frequency[c - 'a'];
        }
        for (char c : t) {
            --frequency[c - 'a'];
        }

        for (int count : frequency) {
            if (count != 0) {
                return false;
            }
        }

        return true;
    }
};

