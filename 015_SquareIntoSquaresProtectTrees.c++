class Decomp {
public:
    static std::vector<long long> decompose(long long n) {
        auto result = decompose(n, n * n);
        if (!result.empty()) {
            result.pop_back();  // remove the last element which is n
        }
        return result;
    }

private:
    static std::vector<long long> decompose(long long n, long long target) {
        if (target == 0) {
            return std::vector<long long>{n};
        }
        for (long long i = n - 1; i > 0; --i) {
            if (target - i * i >= 0) {
                auto result = decompose(i, target - i * i);
                if (!result.empty()) {
                    result.push_back(n);
                    return result;
                }
            }
        }
        return std::vector<long long>{};
    }
};