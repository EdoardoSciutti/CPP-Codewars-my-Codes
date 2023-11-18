#include <cstdint>
#include <optional>
#include <tuple>
#include <vector>
#include <algorithm>

using out_t = std::tuple<std::uint32_t, std::uint64_t, std::uint64_t>;

std::vector<std::uint64_t> numbers;

void find(std::uint32_t sum, std::uint32_t digits, std::uint32_t previous_digit, std::uint64_t number) {
    if (digits == 0) {
        if (sum == 0) {
            numbers.push_back(number);
        }
        return;
    }
    for (std::uint32_t digit = previous_digit; digit <= 9; ++digit) {
        if (sum >= digit) {
            find(sum - digit, digits - 1, digit, number * 10 + digit);
        }
    }
}

std::optional<out_t> find_all(std::uint32_t digit_sum, std::uint32_t digit_count) {
    numbers.clear();
    find(digit_sum, digit_count, 1, 0);
    if (numbers.empty()) {
        return std::nullopt;
    }
    auto minmax = std::minmax_element(numbers.begin(), numbers.end());
    return out_t(numbers.size(), *minmax.first, *minmax.second);
}