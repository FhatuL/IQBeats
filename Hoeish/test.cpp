#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand((unsigned) time(0));

    int random = (rand()%11); 

    int usrInput;

    cout<<"Enter a number between 0 and 10: ";
    cin>>usrInput;

    bool pcWins = (random^usrInput);

    if (pcWins) cout<<"Computer won! \n";

    else cout<<"You Won! \n";

}