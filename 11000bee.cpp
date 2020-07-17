#include <iostream>

using namespace std;

int main(){

    do {

    int endyear;

    cin >> endyear;

    int female=0;
    int male=0;
    int immortal=1;

    if(endyear==-1) return 0;

    for (int i=0; i<endyear; i++){

        int femaleNextyear=male;
        int maleNextyear=female+male+immortal;

        female=femaleNextyear;
        male=maleNextyear;
    }
    int total=male+female+immortal;
    cout << male << " " << total << endl;
    }
    while (true);
}
