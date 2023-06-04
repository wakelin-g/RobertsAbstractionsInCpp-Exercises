#include "gwindow.h"
#include <iostream>
using namespace std;

int main() {
    int boardSize = 800;
    GWindow gw(boardSize, boardSize);
    int checker = boardSize / 8;

    gw.setColor("black");
    gw.drawRect(0, 0, boardSize, boardSize);

    int counter = 1;
    for (int i = 0; i <= boardSize; i += checker) {
        for (int j = 0; j <= boardSize; j += checker) {
            if (counter % 2 == 1) {
                gw.setColor("white");
                gw.fillRect(j, i, boardSize, checker);
            } else {
                gw.setColor("gray");
                gw.fillRect(j, i, boardSize, checker);
            }
            counter = counter + 1;
        }
    }

    int rownumber = 1;
    int colnumber = 1;
    for (int i = checker / 2; i <= 300; i += checker) {
        for (int j = checker / 2; j <= boardSize - checker / 2; j += checker) {
            if (((rownumber % 1 == 0) && (colnumber % 2 == 0)) ||
                ((rownumber % 2 == 0) && (colnumber % 2 != 0))) {
                gw.setColor("red");
                gw.fillOval(j - 45, i - 45, 90, 90);
            }
            colnumber++;
        }
        rownumber++;
        colnumber = 1;
    }
    return 0;
}
