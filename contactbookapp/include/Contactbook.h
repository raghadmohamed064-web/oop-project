#ifndef CONTACTBOOK_H
#define CONTACTBOOK_H
#include <iostream>
#include<contact.h>
#include<Phonenumber.h>
using namespace std;

class Contactbook
{
private:
    int count=0;
    contact contacts[1000];

public:
    void addContact()
    {
        contact c;
        c.Information();
        contacts[count] = c;
        count++;
        cout << "The Contact Is Added Successfully" << endl;
    }
void deleteContact()
    {
        cout << "Please Enter Your ID : " << endl;
        int x;
        cin >> x;
        int i;
        for (i = 0; i < count; i++)
        {
            if (x == contacts[i].getId())
            {
                contacts[i] = contacts[count - 1];
                count--;
                cout << "The Contact Is Deleted Successfully" << endl;
                break;
            }
        }
        if (i == count)
        {
            cout << "The Contact Not Found" << endl;
        }
    }

    void searchContact()
    {
        cout << "Please Enter Your ID : " << endl;
        int x;
        cin >> x;
        int i;
        for (i = 0; i < count; i++)
        {
            if (x == contacts[i].getId())
            {
                contacts[i].print();
                break;
            }
        }
        if (i == count)
        {
            cout << "The Contact Not Found" << endl;
        }
    }

    void editContact()
    {
        cout << "Please Enter Your ID : " << endl;
        int x;
        cin >> x;
        int i;
        for (i = 0; i < count; i++)
        {
            if (x == contacts[i].getId())
            {
                contacts[i].Information();
                cout << "The Contact Is Edited Successfully" << endl;
                break;
            }
        }
        if (i == count)
        {
            cout << "The Contact Not Found" << endl;
        }
    }

    void print()
    {

        for (int i = 0; i < count; i++)
        {

            contacts[i].print();
            cout<<endl;
        }
    }
};

#endif // CONTACTBOOK_H
