// card orderd like numbers
// aces are worth 12 kings 11 all the way down to 2 which is 0
#include "poker/card.hpp"

int rank_of(int card){
    int rank = card % 13;
    return rank;
}

int suit_of(int card){
    int suit = card / 13;
    return suit;
}

