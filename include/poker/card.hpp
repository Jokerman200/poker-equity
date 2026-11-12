#pragma once
#include <string>
using std::string;
using std::vector;

int rank_of(int card);
int suit_of(int card);
int parse_card(const std::string & text);
vector<int> parse_cards(const std::string & hand);