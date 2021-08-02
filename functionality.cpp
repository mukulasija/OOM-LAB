#include<bits/stdc++.h>
#include "information.h"
#include "publisher.h"
#include "subscriber.h"
using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;
using example::information;
using example::publisher;
using example::subscriber;
void publisherentering()
{
    back:
      cout<<"---------------------------------\n";
       cout<<"        Select an option\n";
        cout<<"---------------------------------\n";
    cout<<"1.Publisher 1\n2.Publisher 2\n3.Publisher 3\n4.Go back\n";
    int input;
    cin>>input;
    switch (input)
    {
    case 1:
    publisher::p1->loginorregister();
    
    publisher::p1->puboptions();
    break;
    case 2:
    publisher::p2->loginorregister();
    publisher::p2->puboptions();
    break; 
    case 3:
    publisher::p3->loginorregister();
    publisher::p3->puboptions();
    break;
    case 4:
    return;
    break;
    default:
    cout<<"Please select a valid option\n";
        break;
    }
    goto back;
}
void subentering()
{
    back:
     cout<<"---------------------------------\n";
       cout<<"        Select an option\n";
        cout<<"---------------------------------\n";
    cout<<"1.S1\n2.S2\n3.Go back\n";
    int input;
    cin>>input;
    switch (input)
    {
    case 1:
    subscriber::s1->loginorregister();
    subscriber::s1->suboptions(); 
        break;
        case 2:
        subscriber::s2->loginorregister();
        subscriber::s2->suboptions();
        case 3:
        return;
        break;
    default:
        break;
    }
    goto back;
}
int main()
{
    subscriber b1; 
    subscriber b2;
    b1.sno=1;
    b2.sno=2;
    subscriber::s1=&b1;
    subscriber::s2=&b2;
    publisher a1;
    publisher a2;
    publisher a3;
    a1.pno=1;
    a2.pno=2;
    a3.pno=3;
    publisher::p1=&a1;
    publisher::p2=&a2;
    publisher::p3=&a3;

    back:
     cout<<"---------------------------------\n";
       cout<<"        Select an option\n";
        cout<<"---------------------------------\n";
    cout<<"1.Publisher\n";
    cout<<"2.Subscriber\n";
    cout<<"3.Exit\n";
    int input;
    cin>>input;
    switch (input)
    {
    case 1:
    publisherentering();
    goto back;
        break;
        case 2:
        subentering();
        goto back;
        case 3:
        break;
    default:
    cout<<"Select a valid option\n";
    goto back;
        break;
    }
}