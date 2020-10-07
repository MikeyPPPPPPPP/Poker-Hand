#include "PokerHand.h"
#include <iostream>
using namespace std;

int main(){
    int hand[5] = {0,0,0,0,0,};
    cout << "Enter five numeric cards, no face cards. Use 2 - 9." << endl;
    cout << "Card 1: ";
    cin >> hand[0];
    cout << "Card 2: ";
    cin >> hand[1];
    cout << "Card 3: ";
    cin >> hand[2];
    cout << "Card 4: ";
    cin >> hand[3];
    cout << "Card 5: ";
    cin >> hand[4];

    if (containsPair(hand) == true && containsTwoPair(hand) == true){
        cout << "Two Pairs" << endl;
    } else if (containsTwoPair(hand) != true && containsThreeOfaKind(hand) != true && containsPair(hand) == true){
        cout << "One Pair" << endl;
    } else if (containsThreeOfaKind(hand) == true && containsFullHouse(hand) != true && containsPair(hand) != true){
        cout << "Three Of a Kind" << endl;
    } else if (containsStraight(hand) == true){
        cout << "Straight" << endl;
    } else if (containsPair(hand) == true && containsThreeOfaKind(hand) == true){
        cout << "Full House" << endl;
    } else if (containsFourOfaKind(hand) == true){
        cout << "Four of a kind" << endl;
    } else {
        cout << "High Card" << endl;
    }
    return 0;
};
