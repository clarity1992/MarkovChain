//
//  MarkovState.h
//  MarkovChain
//
//  Created by Joe Park on 17/11/2014.
//
//

#ifndef __MarkovChain__MarkovState__
#define __MarkovChain__MarkovState__

#include <vector>

class MarkovState
{
public:
    MarkovState(std::vector<unsigned> matrixRow);
    
    unsigned getStateTransition(float stateTransitionValue);
    
private:
    std::vector<float> transitionalProbs;
};

#endif /* defined(__MarkovChain__MarkovState__) */
