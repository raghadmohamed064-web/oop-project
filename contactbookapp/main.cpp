#include <iostream>
#include<Phonenumber.h>
#include<contact.h>
#include<Contactbook.h>
using namespace std;

int main()
{
    Contactbook c;
    int x;
    do
    {

        cout<<"press 0 to exist"<<endl;
        cout<<"press 1 to add contact"<<endl;
        cout<<"press 2 to delete contant"<<endl;
        cout<<"press 3 to search about contant"<<endl;
        cout<<"press 4 to edit contant"<<endl;
        cout<<"press 5 to print all contants"<<endl;
        cin>>x;
        system("cls");
        switch(x)
        {
        case 0:

            break;
        case 1:
            c.addContact();
            break;
        case 3:
            c.searchContact();
            break;
        case 4:
            c.editContact();
            break;
        case 5:
            c.print();
            break;
        default:
                cout<<"Press numbur from (1-5)"<<endl;
         break;

        }
    }
        while(x!=0);



    return 0;
}
