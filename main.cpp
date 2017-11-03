#include <iostream>
#include "bin/ledger.h"

int main() {

    Ledger l;

    std::cout << "Genesis block timestamp: " << l.getGenesisTimeStamp() << std::endl;

    std::cout << "Done" << std::endl;

    return 0;
}