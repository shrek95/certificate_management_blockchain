#include <iostream>
#include <vector>
#include <string>

namespace artivatic{
    class Register{
        private:
            std::string name;
            std::string technology;
            uint32_t yearOfJoining;
            uint32_t uId;
            uint32_t upVote;
        public:
            void Register( std::string nameArg, 
                    std::string technologyArg, 
                    uint32_t yearOfJoiningArg, 
                    uint32_t uIdArg, 
                    uint32_t upVoteArg );


            void Register( std::string nameArg, 
                    std::string technologyArg, 
                    uint32_t yearOfJoiningArg, 
                    uint32_t uIdArg );
    
    };



}

