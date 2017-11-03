#include <vector>
#include <ctime>
#include <string>
#include <sstream>

class Ledger{

private:


    // TODO additional Ledger data members
    class Contract{

    private:
        // TODO create data members
        std::string timeStamp;

        class Settlement{
            // TODO settlement class
        };
    public:
        Contract(){ // TODO: default constructor
            // get current date/time, stream data into oss, initialize timeStamp with data that was streamed into oss
            std::ostringstream oss;
            time_t t = time(0);
            struct tm * now = localtime( & t );
            oss << (now->tm_year + 1900) << ":" << now->tm_mon+1 << ":" << now->tm_mday << ":" << now->tm_hour << ":" << now->tm_min << ":" << now->tm_sec;
            timeStamp = oss.str();
        }

        std::string getTimeStamp(){
            return timeStamp;
        }

        // TODO constructor that takes various parameters based on Contract classes's data members

    };

    std::vector<Contract> blockChain;

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