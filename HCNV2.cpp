#include <bits/stdc++.h>
using namespace std;

unsigned long long diff(int x, int y) { return abs(abs(x) - abs(y)); }

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

    unsigned long long diff_x = 0;
    unsigned long long diff_y = 0;

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

    cout << area;

    return 0;
}
