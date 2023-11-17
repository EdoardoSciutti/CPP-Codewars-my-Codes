std::vector<std::string> solution(const std::string &s)
{
    std::vector<std::string> pairs;
    for (size_t i = 0; i < s.size(); i += 2) {
        std::string pair = s.substr(i, 2);
        if (pair.size() < 2) {
            pair += "_";
        }
        pairs.push_back(pair);
    }
    return pairs;
}