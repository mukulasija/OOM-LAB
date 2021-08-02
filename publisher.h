#ifndef __publisher
#define __publisher
#include "information.h"
using std::string;
namespace example
{
    class publisher : public information
    {
        public:
        publisher();
        void puboptions();
        static publisher * p1;
        static publisher * p2;
        static publisher * p3;
        bool registerpublisher();
        bool isregistered;
       // void loginorregister();
        string pubname;
        void publish();
        private:
        string pubpass;
        
    };
}

#endif