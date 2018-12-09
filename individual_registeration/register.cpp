#include "register.hpp"

void Register( std::string nameArg, 
        std::string technologyArg, 
        uint32_t yearOfJoiningArg, 
        uint32_t uIdArg, 
        uint32_t upVoteArg ){
    this->name = nameArg;
    this->technology = technologyArg;
    this->yearOfJoining = yearOfJoiningArg;
    this->uId = uIdArg;
    this->upVote = upVote;

}

void Register( std::string nameArg, 
        std::string technologyArg, 
        uint32_t yearOfJoiningArg, 
        uint32_t uIdArg ){

    this->name = nameArg;
    this->technology = technologyArg;
    this->yearOfJoining = yearOfJoiningArg;
    this->uId = uIdArg;  
} 


