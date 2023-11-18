#include <string>
#include <vector>

std::vector<std::string> towerBuilder(unsigned nFloors) {
    std::vector<std::string> tower;
    for (unsigned i = 1; i <= nFloors; ++i) {
        std::string floor(nFloors - i, ' ');
        floor += std::string(2 * i - 1, '*');
        floor += std::string(nFloors - i, ' ');
        tower.push_back(floor);
    }
    return tower;
}