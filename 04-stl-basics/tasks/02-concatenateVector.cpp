#include <iostream>
#include <vector>

std::vector<int> concatenateVector(const std::vector<int>& vec1, const std::vector<int>& vec2) 
{
    std::vector<int> resultVector {};
    int counter {0};

    if (vec1.size() <= vec2.size()) {
        for (auto el:vec1) {
            resultVector.push_back(el);
            resultVector.push_back(vec2.at(counter));
            counter++;
        }
    } else {
        for (auto el:vec2) {
            resultVector.push_back(vec1.at(counter));
            resultVector.push_back(el);
            counter++;
        }
    }
    return resultVector;
}

int main() {
    std::vector<int> vec1 {1, 2, 3, 4, 5, 6, 7};
    std::vector<int> vec2 {11, 12, 13, 14, 15};

    auto vec = concatenateVector(vec1, vec2);
    for (const auto& el : vec) {
        std::cout << el << " ";
    }
    return 0;
}
