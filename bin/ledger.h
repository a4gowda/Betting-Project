#include <vector>
#include <ctime>
#include <string>
#include <sstream>
#include "ContractBlock.h"

class Ledger{

private:


    // TODO additional Ledger data members


    std::vector<ContractBlock> blockChain;

public:

    Ledger(){ // TODO: default constructor, create genesis block
        blockChain.emplace_back(); // genesis block is contract?

    }

    // TODO create constructor with parameters based on data members of Contract
    // to initialize ledger with genesis block and one contract

    bool addContract(){ // TODO: need parameters for adding contract
        blockChain.emplace_back(); // append new contract block

    }

    std::string getGenesisTimeStamp(){
        return blockChain[0].getTimeStamp();

    }

};