#ifndef _S2LazyQueue_H
#define _S2LazyQueue_H


#include <iostream>
#include <map>
#include <stack>
#include <unordered_map>
#include <time.h>
#include <string.h>
#include "cache_algorithms.h"
using namespace std;


class S2LazyQueue : public CacheAlgorithms {

public :
    
    virtual int update(ULLD item, ULLD visitTime) ;
    virtual void heartBeat();
    virtual void init();

};


#endif
