#include <iostream>
using namespace std;
int main(){

    int n, count = 0, starRating;
    int points, fouls;//1 point, 5 stars given. 1 foul, 3 stars taken.
    cin >> n;

    for (int i = 0; i < n; i++){

        cin >> points;
        cin >> fouls;
        starRating = 5*points - 3*fouls;

        if (starRating > 40){
            count++;
        }

    }

    cout << count;


    if (count == n){
            cout << "+";
    }
}
