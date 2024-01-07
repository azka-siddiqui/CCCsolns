#include <iostream>
#include  <string>
using namespace std;

int main () {
    int num, count = 0, i = 0;

    cin >> num;

    while(num >= i*5){
        if ((num - 5*i)%4 == 0){
              count++;
        }
        i++;
    }

    cout << count;
}
