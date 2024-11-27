#include <iostream>
#include <utility>
#include <vector>

constexpr int UPPER_BOUND = 100001;

std::vector<int> getRemainingCoins(const std::vector<int>& coins, const std::vector<std::pair<char, int>> ops)
{
    std::vector<bool> remaining_coins_hot_one(UPPER_BOUND, false);
    for (int coin : coins) {
        remaining_coins_hot_one[coin - 1] = true;
    }

    int total_remaining_coins = coins.size();
    for (int i = 0; i < ops.size(); i++) {
        if (ops[i].first == 'X') {
            remaining_coins_hot_one[ops[i].second - 1] = false;
            total_remaining_coins--;
        }
    }
    std::vector<int> remaining_coins(total_remaining_coins);
    int counter = 0;
    for (int i = 0; i < remaining_coins_hot_one.size(); i++) {
        if (remaining_coins_hot_one[i]) {
            remaining_coins[counter++] = i + 1;
        }
    }
    return remaining_coins;
}

void dp(std::vector<int>& memo, int coin)
{
    for (int i = coin; i < memo.size(); i++) {
        if (memo[i - coin] != -1) {
            if (memo[i] == -1) {
                memo[i] = memo[i - coin] + 1;
            } else {
                memo[i] = std::min(memo[i - coin] + 1, memo[i]);
            }
        }
    }
}

int main()
{
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    int coin_count, op_count;
    std::cin >> coin_count >> op_count;
    std::vector<int> coins(coin_count);
    for (int i = 0; i < coin_count; i++) {
        std::cin >> coins[i];
    }
    std::vector<std::pair<char, int>> ops(op_count);
    for (int i = 0; i < op_count; i++) {
        std::cin >> ops[i].first >> ops[i].second;
    }
    std::vector<int> remaining_coins = getRemainingCoins(coins, ops);
    std::vector<int> memo(UPPER_BOUND, -1);
    memo[0] = 0;
    for (int coin : remaining_coins) {
        dp(memo, coin);
    }
    std::vector<int> results;
    for (int i = ops.size() - 1; i >= 0; i--) {
        if (ops[i].first == 'Q') {
            results.push_back(memo[ops[i].second]);
        } else {
            dp(memo, ops[i].second);
        }
    }
    for (int i = results.size() - 1; i >= 0; i--) {
        std::cout << results[i] << std::endl;
    }
}