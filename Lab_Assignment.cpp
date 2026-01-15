#include <cstdio>
#include <iostream>
using namespace std;

void mco (int stay =2){     //subprogram 1
    cout << stay << endl;
}
void mco (int &safe){       //subprogram 2
    cout << safe << endl;
}

main(){
    int life = 5;
    mco();  //line 1 (modified )
    return 0;
}