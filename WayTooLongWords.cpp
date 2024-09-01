#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;
    std::string word;

    for (int i = 0; i < n; ++i) {
        std::cin >> word;
        int length = word.length();

        if (length > 10) {
            // Abbreviate the word
            std::cout << word[0] << (length - 2) << word[length - 1] << std::endl;
        } else {
            // Print the word as is
            std::cout << word << std::endl;
        }
    }

    return 0;
}
