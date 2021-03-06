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

template<typename T>
std::vector<Point<T>> convex_hull (std::vector<Point<T>>& points) {
    std::vector<Point<T>> ans;
    std::sort(points.begin(), points.end(), left_to<Point<T>>());
    return ans;
}

} // namespace clg


