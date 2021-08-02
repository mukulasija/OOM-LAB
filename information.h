#ifndef __information
#define __information
using std::string;
namespace example
{
    class information
    {
        public:
        information();
        int sno;
        int pno;
        string verificationname;
        string verificationpass; 
        bool isregistered;
        int ss[3]={0,0,0};
        int pp[2]={0,0};
        void checksubsbypub();
        void vieworsub(int option);
        void checkandshow();
        string publishercontent;
        void loginorregister();
    };
}
#endif