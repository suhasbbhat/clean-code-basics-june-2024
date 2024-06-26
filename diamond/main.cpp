#include "P.h"
#include "S.h"
#include "PS.h"

void printTask(IPrintableDevice* ptr) {
    ptr->print();
}

void scanTask(IScanner* sptr) {
    sptr->scan();
}

int main() {
    P pObj;
    S sObj;
    PS psObj(10, &sObj, &pObj);
    printTask(&pObj);
    printTask(&psObj);
    scanTask(&sObj);
    scanTask(&psObj);
    return 0;
}
