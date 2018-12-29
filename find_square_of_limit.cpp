#include <iostream>

int main() {

    int i = 0;
    int square = 0;
    int limit;
    std::cout << "Please define your limit as a whole number \n";
    std::cin >> limit;

    // Write a while loop here:
    while (i < limit){
        std::cout << i << " " << (square * square) << "\n";
        i ++;
        square ++;
    }

}