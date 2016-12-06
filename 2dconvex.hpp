template<typename T>
Struct Point {
    T _x, _y;
    Point(): _x(T(0)), _y(T(0)) {}
    Point(const T& x, const T& y):_x(x), _y(y) {}
};