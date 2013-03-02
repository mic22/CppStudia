#include <iostream>
#include <string>

using namespace std;

enum automat {Play, Stop, Pause};
char *names[]={"Play","Stop","Pause"};

automat nextState(automat a)
{
    switch(a)
    {
        case Stop:
            return Play;
        case Play:
            return Pause;
        case Pause:
            return Stop;
    }
}

int main()
{
    automat a = Stop;
    a = nextState(a);
    cout<<names[a]<<" ";
    a = nextState(a);
    cout<<names[a]<<" ";
    a = nextState(a);
    cout<<names[a]<<" ";

    return 0;
}