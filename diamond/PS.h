#ifndef PS_h
#define PS_h

#include "D.h"
#include "IPrintableDevice.h"
#include "IScanner.h"

class PS : public D, public IPrintableDevice, public IScanner {
    IScanner* sObj;
    IPrintableDevice* pObj;
public:
    PS(int x, IScanner* sAddress, IPrintableDevice* pAddress);
    ~PS();
    void print() override;
    void scan() override;
};

#endif
