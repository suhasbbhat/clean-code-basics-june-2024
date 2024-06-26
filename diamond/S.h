#ifndef S_h
#define S_h

#include "D.h"
#include "IScanner.h"

class S : public D, public IScanner {
public:
    S();
    ~S();
    void scan() override;
};

#endif
