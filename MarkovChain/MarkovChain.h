//
//  MarkovChain.h
//  MarkovChain
//
//  Created by Joe Park on 17/11/2014.
//
//

#ifndef __MarkovChain__MarkovChain__
#define __MarkovChain__MarkovChain__

#include <vector>
#include "MarkovState.h"


class MarkovChain
{
public:
    MarkovChain(std::vector<std::vector<unsigned>> matrix);
    
    int getNextState();
    
private:
    unsigned currentStateIndex;
    
    std::vector<MarkovState> states;
};

#endif /* defined(__MarkovChain__MarkovChain__) */
