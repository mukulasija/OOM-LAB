#include<bits/stdc++.h>
#include "information.h"
#include "publisher.h"
#include "subscriber.h"
using std::cout;
using std::cin;
using std::string;
using example::publisher;
using example::subscriber;
using std::endl;
namespace example
{
    information::information()
    {
        isregistered=0;
    }
    void information::vieworsub(int option)
    {
        if(option>3)
     {   cout<<"Please select a valid option\n";
     return;
    }
    else
    {
        if(ss[option]==1){
            cout<<"showing you the content of Publisher "<<option<<": ";
            switch (option)
            {
            case 1:
            cout<<publisher::p1->publishercontent; 
                break;
                case 2:
                cout<<publisher::p2->publishercontent;
                break;
                case 3:
                cout<<publisher::p3->publishercontent;
            
            default:
                break;
            }
            cout<<endl;
        }
        else
        {
            cout<<"Not yet subscribed\n\n\nsubscribing to this publisher\n";
            ss[option]=1;
            switch (option)
            {
            case 1:
            publisher::p1->pp[sno-1]=1;
                break;
                case 2:
                publisher::p2->pp[sno-1]=1;
                break;
                case 3:
                publisher::p3->pp[sno-1]=1;
                break;
            default:
                break;
            }
            pp[sno]=1;
        }
    }
    }
    void information::checksubsbypub()
    {
        back:
        cout<<"\nNames of your subscribers: \n";
        if(pp[0]==1)
        cout<<subscriber::s1->verificationname;
        cout<<"\n";
        if(pp[1]==1)
        cout<<subscriber::s2->verificationname;
        cout<<"\n";
        cout<<"0. Go back\n";
        int input;
        
        cin>>input;
        switch (input)
        {
        case 0:
            break;
        default:
        cout<<"Select a valid option\n";
        goto back; 
            break;
        }
    }
    void information::loginorregister()
    {
      //  cout<<"value of register: "<<isregistered; 
        if(!this->isregistered)
        {
            cout<<"Your are not Registered, first register yourself\n";
            isregistered=1;
            cout<<"\nEnter your name: ";
            string name;
            cin>>name;
            this->verificationname=name;
            cout<<"Create a password: ";
            string pass;
            cin>>pass;
            this->verificationpass=pass;
            cout<<"\nregistered successfully\n\n";
        }
        else
        {
            again:
            cout<<"Enter Your password to login again : ";
            string pass;
            cin>>pass;
            if(this->verificationpass==pass)
            {
                cout<<"\npassword matched\n";
            }
            else
            {
                cout<<"Wrong password\n";
                goto again;
            }
        }
    }
}