//  Testing environment  //
#include <iostream>
#include <cstdio>

using namespace std;

void sample_question01(){
    int j = 50; // Example value for j
    int i;      // Declaring i for line 5
    cout << "Please enter your for j: ";
    cin >> j;
    cout << endl;
    // line 1
    int msia = (j + 13) / 27; 
    cout << "value of msia: " << msia << " and the value of j: " << j <<endl;


    loop: // line 2
    // line 3
    if (msia >= 10) goto out; 

    // line 4
    msia = msia + 1; 

    // line 5
    i = 3 * msia - 1; 

    // line 6
    cout << "Hello, the i: " << i << "and the msia value: " << msia <<endl;

    // line 7
    goto loop; 

    out: // line 8
    std::cout << "system exit" << std::endl;
}

// question 2
    int msia() {return puts("msia");}
    int sia() {return puts("sia");}
    int ia() {return puts("ia");}
    void merdeka (int, int, int){}
int question02(){
    merdeka(msia(),sia(),ia());
    return msia() + sia() + ia();
}


// question 3
void mco (int stay =2){
    cout << stay << endl;
}
void mco (int &safe){
    cout << safe << endl;
}
int question03(){
    int life = 5;
    mco();
}

int main() {

    //sample_question01();
    //question02();
    question03();

    return 0;
}