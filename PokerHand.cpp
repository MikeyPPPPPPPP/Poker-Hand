#include "PokerHand.h"

bool  containsPair(int hand[])
{
    bool good = false;
    int greatest;
    for (int x = 0; x < 5; x++){
        int result = 0;
        for (int i = 0; i < 5; i++)
            if (hand[x] == hand[i])
                result++;
        
        if (result == 2){
            greatest = hand[x];
            good = true;
        }
    }
    return good;
};

bool  containsTwoPair(int hand[])
{
    bool good = false;
    int greatest;
    int counter = 0;
    for (int x = 0; x < 5; x++){
        int result = 0;
        for (int i = 0; i < 5; i++){
            if (hand[x] == hand[i]){
                result++;
            }
        }
        if (result == 2){
            counter++;
        }
        if (counter == 4){
            greatest = hand[x];
            good = true;
        }
    }
    return good;
};

bool  containsThreeOfaKind(int hand[])
{
    bool good = false;
    int greatest;
    for (int x = 0; x < 5; x++){
        int result = 0;
        for (int i = 0; i < 5; i++)
            if (hand[x] == hand[i])
                result++;
        
        if (result == 3){
            greatest = hand[x];
            good = true;
        }
    }
    return good;
};

bool containsStraight(int hand[])
{
    int largest = hand[0];
    int straight[5] = {};
    
    for(int t = 0; t < 5; t++){
        if(largest < hand[t]){
            largest = hand[t];
        }    
    }
    
    if (largest == 10){
        for(int i = 0;i < 5; i++) {
            straight[i] = {6+i};
        };
    }else if (largest == 9){
        for(int i = 0;i < 5; i++) {
            straight[i] = {5+i};
        };
    } else if (largest == 8){
        for(int i = 0;i < 5; i++) {
            straight[i] = {4+i};
        };
    } else if (largest == 7){
        for(int i = 0;i < 5; i++) {
            straight[i] = {3+i};
        };
    } else if (largest == 6){
        for(int i = 0;i < 5; i++) {
            straight[i] = {2+i};
        };
    }
    bool cool[5] = {false,false,false,false,false};
    bool good = true;
    for (int x = 0; x < 5; x++){
        for (int y = 0; y < 5; y++){
            if(straight[x] == hand[y]){
                cool[x] = true;
            }
        }
    }
    for(int t = 0;t < 5; t++){
        if (cool[t] != true){
            good = false;
        }
    }
    return good;
};

bool  containsFullHouse(int hand[])
{
    int first = hand[0];
    int two = 0;
    bool good = true; 
    for (int x = 0; x < 5; x++){
        if (hand[x] != first && two == 0){
            two = hand[x-1];
        } else if (hand[x-1] != first && hand[x-1] != two){
            good = false;
        };
    }
    return good;
};

bool  containsFourOfaKind(int hand[])
{
    bool good = false;
    int greatest;
    for (int x = 0; x < 5; x++){
        int result = 0;
        for (int i = 0; i < 5; i++)
            if (hand[x] == hand[i])
                result++;
        
        if (result == 4){
            greatest = hand[x];
            good = true;
        }
    }
    return good;
};
