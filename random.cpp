#include <iostream>
#include <time.h>
#include <cstdlib>


using namespace std;




int main (int argc, char* argv[]) {
    unsigned int dice_rolls = 12;
    int x;
    cin >> x;
    srand(time(0));
    for(int i=0;i<20;i++){

    	x = (rand()%6)+1;

    	cout<<i+1<<"result"<<x<<endl;

    }

    cout << "something" << endl;
    return 0;
   
    }
