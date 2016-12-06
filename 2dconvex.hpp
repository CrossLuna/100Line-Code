#include <algorithm>
#include <vector>

namespace clg {

template<typename T>
struct Point {
    T x, y;
    Point(): x(T(0)), y(T(0)) {}
    Point(const T& i, const T& j):x(i), y(j) {}
};

template<typename T>
struct left_to {
    bool operator() (const Point<T>& p1, const Point<T>& p2) {
        if (p1.x == p2.x)
            return p1.y < p2.y;
        else
            return p1.x < p2.x;
    }
};

} // namespace clg


