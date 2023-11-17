#include <vector>

class SqInRect
{
  public:
  static std::vector<int> sqInRect(int lng, int wdth) {
    if (lng == wdth) return std::vector<int>();
    
    std::vector<int> squares;
    while (lng > 0 && wdth > 0) {
      if (lng > wdth) {
        squares.push_back(wdth);
        lng -= wdth;
      } else if (wdth > lng) {
        squares.push_back(lng);
        wdth -= lng;
      } else {
        squares.push_back(lng);
        lng = wdth = 0;
      }
    }
    return squares;
  }
};