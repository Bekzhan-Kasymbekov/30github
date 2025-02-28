
#include <iostream>
#include <vector>
#include <string>

std::string likes(const std::vector<std::string> &names) {
    std::string output;

    if (names.empty()) return "no one likes this";

    if (names.size() == 1) {
        output = names[0] + " likes this";
    } else if (names.size() == 2) {
        output = names[0] + " and " + names[1] + " like this";
    } else if (names.size() == 3) {
        output = names[0] + ", " + names[1] + " and " + names[2] + " like this";
    } else {
        output = names[0] + ", " + names[1] + " and " + std::to_string(names.size() - 2) + " others like this";
    }

    return output;
}

int main() {
    std::vector<std::string> test1 = {};
    std::vector<std::string> test2 = {"Peter"};
    std::vector<std::string> test3 = {"Jacob", "Alex"};
    std::vector<std::string> test4 = {"Max", "John", "Mark"};
    std::vector<std::string> test5 = {"Alex", "Jacob", "Mark", "Max"};

    std::cout << likes(test1) << std::endl;
    std::cout << likes(test2) << std::endl;
    std::cout << likes(test3) << std::endl;
    std::cout << likes(test4) << std::endl;
    std::cout << likes(test5) << std::endl;

    return 0;
}
