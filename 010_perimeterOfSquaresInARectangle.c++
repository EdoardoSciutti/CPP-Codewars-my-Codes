typedef unsigned long long ull;

class SumFct
{
public:
    static ull perimeter(int n) {
        ull a = 0, b = 1;
        ull sum = 0;
        for (int i = 0; i <= n; i++) {
            sum += b;
            ull temp = a + b;
            a = b;
            b = temp;
        }
        return 4 * sum;
    }
};