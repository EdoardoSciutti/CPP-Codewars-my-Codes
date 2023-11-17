int persistence(long long n) {
    int counter = 0;
    while (n > 9) {
        long long product = 1;
        for (char c : std::to_string(n)) {
            product *= c - '0';
        }
        n = product;
        ++counter;
    }
    return counter;
}