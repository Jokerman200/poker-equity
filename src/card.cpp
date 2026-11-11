#include <iostream>

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

int parse_card(const std::string & text ){
    if (text.size() != 2){
        return -1;
    }

    // so if i got As i have an ace and ik its spades 
    // hearts hve suit 0 diamonds suit 1 clubs have suit 2 spades have suit 3
    std::string  ranks = "23456789TJQKA";
    std::string suits = "hdcs";
    int num = 0;
    if (ranks.find(text[0]) == std::string::npos|| suits.find(text[1]) == std::string::npos){
        return -1;
    }
    num = ranks.find(text[0]);
    num += suits.find(text[1]) * 13;
    return num;
}