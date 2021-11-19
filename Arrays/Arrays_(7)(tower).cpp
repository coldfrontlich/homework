#include <iostream>

int main() {
    int room;
    std::cout << "Input number of room: \n";
    std::cin >> room;
    int floor = 1;
    int tec_room = 1;
    int pred_room = 0;
    while (tec_room < room) {
        pred_room = tec_room;
        tec_room += (tec_room + 1);
        ++floor;
    }
    std::cout << floor - 1 << " " << room - pred_room;
}