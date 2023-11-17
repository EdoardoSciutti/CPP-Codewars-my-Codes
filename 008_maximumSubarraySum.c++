#include <vector>
#include <algorithm>

int maxSequence(const std::vector<int>& arr) {
    int max_sum = 0, current_sum = 0;
    for (const auto& num : arr) {
        current_sum = std::max(0, current_sum + num);
        max_sum = std::max(max_sum, current_sum);
    }
    return max_sum;
}