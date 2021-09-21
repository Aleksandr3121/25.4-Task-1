#include <iostream>
#include "surgeon.h"

using namespace std;

int main() {
    Coordinate start, finish;
    cout << "Введите координаты хирургического разреза" << endl;
    cin >> start >> finish;
    Scalpel(start, finish);
    string command;
    while (true) {
        cin >> command;
        if (command == "scalpel") {
            Coordinate c1, c2;
            cin >> c1 >> c2;
            Scalpel(c1, c2);
        } else if (command == "hemostat") {
            Coordinate c;
            cin >> c;
            Hemostat(c);
        } else if (command == "tweezers") {
            Coordinate c;
            cin >> c;
            Tweezers(c);
        } else if (command == "suture") {
            Coordinate c1, c2;
            cin >> c1 >> c2;
            Suture(c1, c2);
            if ((start == c1 && finish == c2) || (start == c2 && finish == c1))break;
        } else cout << "Unknown command" << endl;
    }
    cout << "The operation is completed" << endl;
    return 0;
}
