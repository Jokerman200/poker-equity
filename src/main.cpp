#include <iostream>
#include "poker/card.hpp"

int main() {
    std::cout << "hello poker\n";
    std::cout << rank_of(30) << " " << suit_of(30) << " " << rank_of(51) << " " << suit_of(51) << "\n";
}