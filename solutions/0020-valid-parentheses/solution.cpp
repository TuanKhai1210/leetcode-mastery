#include <stack>
#include <string>

using namespace std;

// Reviewed version of the learner's Week 4 submission.
class Solution {
public:
    bool isValid(string s) {
        stack<char> openings;

        for (const char bracket : s) {
            if (bracket == '(' || bracket == '[' || bracket == '{') {
                openings.push(bracket);
                continue;
            }

            if (openings.empty()) {
                return false;
            }

            const char latest_opening = openings.top();
            const bool matches =
                (bracket == ')' && latest_opening == '(') ||
                (bracket == ']' && latest_opening == '[') ||
                (bracket == '}' && latest_opening == '{');

            if (!matches) {
                return false;
            }

            openings.pop();
        }

        return openings.empty();
    }
};
