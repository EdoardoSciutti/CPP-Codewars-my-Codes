#include <string>

std::string uint32_to_ip(uint32_t ip)
{
    std::string result;
    for(int i = 0; i < 4; i++) {
        result = std::to_string(ip & 0xFF) + (i ? "." + result : "");
        ip >>= 8;
    }
    return result;
}