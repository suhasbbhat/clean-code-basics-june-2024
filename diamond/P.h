#ifndef P_h
#define P_h

#include "D.h"
#include "IPrintableDevice.h"

class P : public D, public IPrintableDevice {
public:
    P();
    ~P();
    void print() override;
};

#endif
