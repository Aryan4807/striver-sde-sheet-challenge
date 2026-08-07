#include <vector>
#include <algorithm>
int maxProfit(std::vector<int>& prices) {
    if (prices.empty()) {
        return 0;
    }

    int maxp = 0;
    int min_price = prices[0];
    for (size_t i = 1; i < prices.size(); ++i) {
        maxp = std::max(maxp, prices[i] - min_price);
        min_price = std::min(min_price, prices[i]);
    }
    return maxp;
}