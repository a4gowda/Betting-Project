#include "SettlementBlock.h"



class Contract{

private:
    // TODO create data members
    std::string timeStamp;


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

