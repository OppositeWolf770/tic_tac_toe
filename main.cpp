#include <iostream>
#include <vector>

const char INITIAL_VALUE = 'X';

int main() {
    std::vector<std::vector<char>> board = {
            {INITIAL_VALUE, INITIAL_VALUE, INITIAL_VALUE},
            {INITIAL_VALUE, INITIAL_VALUE, INITIAL_VALUE},
            {INITIAL_VALUE, INITIAL_VALUE, INITIAL_VALUE},
    };


    for (auto & i : board) {
        for (char j : i) {
            std::cout << j;
        }
        std::cout << std::endl;
    }

    return 0;
}
