#ifndef D_h
#define D_h

#include <iostream>

class D {
private:
    int val;
protected:
    D(int x);
public:
    ~D();
    void printVal();
};

#endif
