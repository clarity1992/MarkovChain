//
//  MarkovChain.cpp
//  MarkovChain
//
//  Created by Joe Park on 17/11/2014.
//
//
#include "MarkovChain.h"

#include <random>
#include <vector>

MarkovChain::MarkovChain(std::vector<std::vector<unsigned>> matrix)
{
    currentStateIndex = 0;
    
    for (auto matrixRow: matrix)
    {
        MarkovState newState(matrixRow);
        this->states.push_back(newState);
    }
}

int MarkovChain::getNextState()
{
    //Generate random float 0-1
    float rand = random();
    
    //Pass random number to the current Markov State and get the transition state
    this->currentStateIndex = this->states.at(currentStateIndex).getStateTransition(rand);
    
    //return int of state
    return this->currentStateIndex;
}
