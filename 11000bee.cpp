#include <iostream>

using namespace std;

int main(){

    do {

    int endyear;

    cin >> endyear;

    long long female=0;
    long long male=0;
    long long immortal=1;

    if(endyear==-1) return 0;

    for (int i=0; i<endyear; i++){

        long long femaleNextyear=male;
        long long maleNextyear=female+male+immortal;

        female=femaleNextyear;
        male=maleNextyear;
    }
    long long total=male+female+immortal;
    cout << male << " " << total << endl;
    }
    while (true);
}
