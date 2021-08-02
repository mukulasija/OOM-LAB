#include<bits/stdc++.h>
#include "publisher.h"
using std::cout;
using std::string;
using example::publisher;
using std::cin;
namespace example
{
    publisher* publisher::p1=0;
    publisher* publisher::p2=0;
    publisher* publisher::p3=0;

    publisher::publisher()
    {
       this->isregistered=0;
    }
    void publisher::puboptions()
    {
        back:
         cout<<"---------------------------------\n";
       cout<<"        Select an option\n";
        cout<<"---------------------------------\n";
        cout<<"1.Check Your Subscribers\n2.Publish Content\n3.Go back\n";
        int input;
        cin>>input;
        switch (input)
        {
        case 1:
     this->checksubsbypub();
        break;
        case 2:
        this->publish();
        break;
        case 3:
        return;
        break;
        default:
            break;
        }
        goto back; 
    }
    void publisher::publish()
    {
        string s;
        cout<<"Enter a string to publish: ";
        cin>>s;
        this->publishercontent=s;
        cout<<s<<" published successfully\n";
    }
    // void publisher::loginorregister()
    // {
    //   //  cout<<"value of register: "<<isregistered; 
    //     if(!this->isregistered)
    //     {
    //         isregistered=1;
    //         cout<<"\nEnter your name";
    //         string name;
    //         cin>>name;
    //         this->pubname=name;
    //         cout<<"\nCreate a password";
    //         string pass;
    //         cin>>pass;
    //         this->pubpass=pass;
    //         cout<<"\nregistered successfully\n";
    //     }
    //     else
    //     {
    //         again:
    //         cout<<"Enter Your password\n";
    //         string pass;
    //         cin>>pass;
    //         if(this->pubpass==pass)
    //         {
    //             cout<<"password matched\n";
    //         }
    //         else
    //         {
    //             cout<<"Wrong password\n";
    //             goto again;
    //         }
    //     }
    // } 
}