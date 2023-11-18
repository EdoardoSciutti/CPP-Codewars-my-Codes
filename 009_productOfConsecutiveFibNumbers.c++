#include <vector>
typedef unsigned long long ull;

class ProdFib {
public:
    static std::vector<ull> productFib(ull prod) {
        ull a = 0;
        ull b = 1;
        while (a * b < prod) {
            ull temp = a;
            a = b;
            b = temp + b;
        }
        return {a, b, a * b == prod};
    }
};