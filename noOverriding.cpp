#include <iostream>
using namespace std;

class baseClass {
public:
    virtual void perkenalan() final 
    {
        cout << "halo saya function dari base class";
    }
};

class deriveredClass : public baseClass
{
public:
    void perkenalan()
    {
        cout << "halo saya function dari derivered class";
    }
};

int main()
{
    deriveredClass a;
    a.perkenalan();

    return 0;
}