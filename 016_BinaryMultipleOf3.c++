#include <algorithm>
#include <string>

long nextBigger(long n) {
    std::string digits = std::to_string(n);
    int len = digits.size(), i, j;

    for (i = len - 1; i > 0; i--) {
        if (digits[i] > digits[i - 1]) {
            break;
        }
    }

    if (i == 0) {
        return -1;
    } else {
        char x = digits[i - 1], smallest = i;
        for (j = i + 1; j < len; j++) {
            if (digits[j] > x && digits[j] < digits[smallest]) {
                smallest = j;
            }
        }
        std::swap(digits[smallest], digits[i - 1]);
        std::sort(digits.begin() + i, digits.end());
        return std::stol(digits);
    }
}