#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
    std::cout << "hello jenkins!" << std::endl;

    std::vector<std::string> args(argv + 1, argv + argc);
    for (const auto& arg : args) {
        std::cout << "arg: " << arg << std::endl;
    }
    return 0;
}
