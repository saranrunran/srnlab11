#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;


//grade 9 --> A B+ B C+ C D+ D F W
string grade() {

    srand(time(0));
    int x = rand()%9 + 1;

    if(x == 1) {
        return "A";
    } else if(x == 2) {
        return "B+";
    } else if(x == 3) {
        return "B";
    } else if(x == 4) {
        return "C+";
    } else if(x == 5) {
        return "C";
    } else if(x == 6) {
        return "D+";
    } else if(x == 7) {
        return "D";
    } else if(x == 8) {
        return "F";
    } else{
        return "W";
    }
}

int main() {
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    cout << "You will get " << grade() << " in this 261102.";
}