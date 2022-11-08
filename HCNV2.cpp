#include <bits/stdc++.h>
using namespace std;

int diff(int x, int y) { return abs(abs(x) - abs(y)); }

// unsigned long long area(int ax1, int ay1, int ax2, int ay2, int bx1, int by1,
//                         int bx2, int by2) {
//     unsigned long long area;
//     // 1 vertex in
//     if (ax2 > bx2 && ay1 < by1) {
//         cout << "1 vertex in\n";
//         area = diff(ax1, bx2) * diff(ay2, by1);
//     }
//     // all vertex in
//     else if (ax2 <= bx2 && ay1 >= by1) {
//         cout << "all vertex in\n";
//         area = diff(ax2, ax1) * diff(by2, by1);
//     }
//     // 2 top vertex in
//     else if (ax2 <= bx2) {
//         cout << "2 top vertex in\n";
//         area = diff(ax2, ax1) * diff(ay2, by1);
//     }
//     // 2 left vertex in
//     else {
//         cout << "2 left vertex in\n";
//         area = diff(ax1, bx2) * diff(ay2, ay1);
//     }

//     return area;
// }

int main() {
    int ax1, ay1, ax2, ay2;
    cin >> ax1 >> ay1 >> ax2 >> ay2;
    int bx1, by1, bx2, by2;
    cin >> bx1 >> by1 >> bx2 >> by2;
    unsigned long long area;

    // sort
    if (ax1 > ax2)
        swap(ax1, ax2);
    if (ay1 > ay2)
        swap(ay1, ay2);
    if (bx1 > bx2)
        swap(bx1, bx2);
    if (by1 > by2)
        swap(by1, by2);

    int diff_x = 0;
    int diff_y = 0;

    if (ax1 <= bx1 && bx1 < ax2) {
        diff_x = diff(bx1, min(ax2, bx2));
    }
    if (ax1 < bx2 && bx2 <= ax2) {
        diff_x = diff(max(ax1, bx1), bx2);
    }
    if (ay1 <= by1 && by1 < ay2) {
        diff_y = diff(by1, min(ay2, by2));
    }
    if (ay1 < by2 && by2 <= ay2) {
        diff_y = diff(max(ay1, by1), by2);
    }

    area = diff_x * diff_y;

    // // no overlap
    // if (ax2 <= bx1 || bx2 <= ax1 || ay2 <= by1 || by2 <= ay1) {
    //     cout << 0;
    //     return 0;
    // }

    // // top left
    // if (ax1 < bx2 && ay2 > by1) {
    //     a = area(ax1, ay1, ax2, ay2, bx1, by1, bx2, by2);
    // }
    // // top right
    // else if (ax2 > bx1 && ay2 > by1) {
    //     cout << "Top right\n";
    //     a = area(ay2, ax1, ay1, ax2, by2, bx1, by1, bx2);
    // }
    // // bottom right
    // else if (ax2 > bx1 && ay1 < by2) {
    //     cout << "Bottom right\n";
    //     a = area(ax2, ay2, ax1, ay1, bx2, by2, bx1, by1);
    // }
    // // bottom left
    // else if (ax1 < bx2 && ay1 < by2) {
    //     cout << "Bottom left\n";
    //     a = area(ay1, ax2, ay2, ax1, by1, bx2, by2, bx1);
    // }

    // cout << ax1 << " " << ay1 << " " << ax2 << " " << ay2 << "\n";
    // cout << bx1 << " " << by1 << " " << bx2 << " " << by2 << "\n";
    cout << area;

    return 0;
}
