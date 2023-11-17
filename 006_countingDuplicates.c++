#include <map>
#include <cctype>

size_t duplicateCount(const std::string& in)
{
    std::map<char, int> charCount;
    for (char c : in) {
        charCount[std::tolower(c)]++;
    }

    size_t duplicates = 0;
    for (auto& pair : charCount) {
        if (pair.second > 1) {
            duplicates++;
        }
    }

    return duplicates;
}