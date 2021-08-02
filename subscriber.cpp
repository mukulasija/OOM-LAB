#include<bits/stdc++.h>
#include "subscriber.h"
using std::cout;
using std::string;
using example::subscriber;
using std::cin;

namespace example
{
    subscriber* subscriber::s1=0;
    subscriber* subscriber::s2=0;
    void subscriber::suboptions()
    {back:
     cout<<"---------------------------------\n";
       cout<<"        Select an option\n";
        cout<<"---------------------------------\n";
        cout<<"1.View Content\n2.Go back\n";
        int input;
        cin>>input;
        switch (input)
        {
        case 1:
        prev: cout<<"---------------------------------\n";
       cout<<"        Select an option\n";
        cout<<"---------------------------------\n";
        cout<<"1.P1\n2.P2\n3.P3\n4.Go back\n";
        int option;
        cin>>option;
        if(option==4)
        return;
        this->vieworsub(option);
        
        goto prev;
        break;
        case 2:
        return;break;
        default:
        cout<<"Please select a valid option\n";
            break;
        }
        goto back; 
    }
}