#include <algorithm>
#include <cstddef>
#include <vector>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        if (prices.empty()) {
            return 0;
        }

        int minimumPrice = prices.front();
        int maximumProfit = 0;

        for (std::size_t day = 1; day < prices.size(); ++day) {
            maximumProfit =
                std::max(maximumProfit, prices[day] - minimumPrice);
            minimumPrice = std::min(minimumPrice, prices[day]);
        }

        return maximumProfit;
    }
};
