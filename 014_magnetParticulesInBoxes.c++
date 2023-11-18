#include <cmath>

class Magnets
{
public:
    static double doubles(int maxk, int maxn) {
        double total = 0.0;
        for (int k = 1; k <= maxk; ++k) {
            for (int n = 1; n <= maxn; ++n) {
                total += 1 / (k * pow((n + 1), 2 * k));
            }
        }
        return total;
    }
};