class ASum
{
  public:
  static long long findNb(long long m) {
    long long total = 0;
    long long n = 0;
    while (total < m) {
      n++;
      total += n * n * n;
    }
    return total == m ? n : -1;
  }
};