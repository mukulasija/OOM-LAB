#ifndef __subscriber
#define __subscriber
#include "information.h"
namespace example
{
    class subscriber : public information
    {
        public:
        static subscriber* s1;
        void suboptions(); 
        static subscriber* s2;
    };
}
#endif