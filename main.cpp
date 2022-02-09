#include <bits/stdc++.h>
#define PI acos(-1.0)
#define endl '\n'
using ld = long double;
using ll = long long;
using namespace std;

void print_pyramid(int& height){
    for(int i = 1; i <= height; i++){
        for(int space = 1; space <= height-i; space++)
            cout <<"  ";

        for(int k = 0; k != 2*i; k++)
            cout << "* ";

        cout << endl;
    }
    exit (0);
}

int main() {

    int height;
    cin >> height;
    print_pyramid(height);
    return 0;

}
