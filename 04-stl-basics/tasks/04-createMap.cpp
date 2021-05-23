#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <map>

std::map<int,std::string> createMap(const std::vector<int>& vec, const std::list<std::string>& list) {
    
    std::map<int, std::string> map {};
    auto s = std::min(vec.size(), list.size());
    auto it = list.begin();

    for (auto const& [key, value] : map) {
        
    }
    for (auto i = 0; i < s; ++i) {
        map.insert({vec[i], *it++ });
    }

    return map;
}

int main() {
    std::vector<int> vec{1, 2, 3, 4, 5 };
    std::list<std::string> list{"One", "Two", "Three", "Four", "Five", "lala", "opapa", "jajaj"};
    auto map = createMap(vec, list);

    for (const auto& pair : map)
        std::cout << pair.first << " | " << pair.second << '\n';

    return 0;
}
