std::string brainLuck(const std::string &code, const std::string &input) {
    std::vector<unsigned char> data(30000, 0);
    size_t dataPtr = 0;
    size_t inputPtr = 0;
    std::string output;

    for (size_t i = 0; i < code.size(); ++i) {
        switch (code[i]) {
            case '>': ++dataPtr; break;
            case '<': --dataPtr; break;
            case '+': ++data[dataPtr]; break;
            case '-': --data[dataPtr]; break;
            case '.': output += data[dataPtr]; break;
            case ',': data[dataPtr] = input[inputPtr++]; break;
            case '[':
                if (data[dataPtr] == 0) {
                    int bracketCount = 1;
                    while (bracketCount != 0) {
                        ++i;
                        if (code[i] == '[') ++bracketCount;
                        if (code[i] == ']') --bracketCount;
                    }
                }
                break;
            case ']':
                if (data[dataPtr] != 0) {
                    int bracketCount = 1;
                    while (bracketCount != 0) {
                        --i;
                        if (code[i] == '[') --bracketCount;
                        if (code[i] == ']') ++bracketCount;
                    }
                }
                break;
        }
    }

    return output;
}  