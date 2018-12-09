#include <isotream>
#include <string>
#include <vector>


namespace artivatic{
    
    class block{
        private:
            Blockheader blockheader;
            uint8_t studentName[];
            uint32_t uId;
            uint32_t certUId;
            uint32_t evalId;
            uint32_t valuId;
            uint16_t testId;
            uint8_t techCode;
            uint32_t leaderId;
        public:
            void Block(
                    Blockheader blockheader,
                    uint8_t studentName[100],
                    uint32_t uId,
                    uint32_t certUId,
                    uint32_t evalId,
                    uint32_t valuId,
                    uint16_t testId,
                    uint8_t techCode,
                    uint32_t leaderId);
    };
}
