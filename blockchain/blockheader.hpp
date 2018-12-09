#include <iostream>
#include <string>


using namespace artivatic{

    class Blockheader{
        private:
            uint8_t magicNumber;
            uint32_t blockId;
            uint32_t blockHash;
            uint32_t timestamp;
            uint32_t timeTakenForBlockCreation;
        public:
            void Blockheader(
                    uint8_t magicNumber,
                    uint32_t blockId,
                    uint32_t blockHash,
                    uint32_t timestamp,
                    uint32_t timeTakenForBlockCreation);
    };
}
