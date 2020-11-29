#include <bits/stdc++.h>  
using namespace std;  
enum week { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };  
enum direction { NORTH, SOUTH, EAST, WEST };

int main() {  
    week day;  
    day = Monday;  
    direction move;
    move = NORTH;
    cout << "Day : " << day + 1 << endl;  
    cout << "Move into : " << move +1 << endl;
    return 0;  
}     