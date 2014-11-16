//
//  MarkovState.cpp
//  MarkovChain
//
//  Created by Joe Park on 17/11/2014.
//
//

#include "MarkovState.h"

MarkovState::MarkovState(std::vector<unsigned> matrixRow)
{
    for (auto transitionalProbability: matrixRow)
    {
        this->transitionalProbs.push_back(transitionalProbability);
    }
}

unsigned MarkovState::getStateTransition(float stateTransitionValue)
{
    float runningProbabilityTotal = 0;
    
    float transitionStateIndex = 0;
    
    for (auto stateTransitionProbablity: transitionalProbs)
    {
        runningProbabilityTotal += stateTransitionProbablity;
        if (runningProbabilityTotal >= stateTransitionValue)
        {
            return transitionStateIndex;
        }
        transitionStateIndex++;
    }
    return transitionStateIndex;
}