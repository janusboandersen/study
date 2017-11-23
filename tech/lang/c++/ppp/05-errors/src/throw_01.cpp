#include "../../include/std_lib_facilities.hpp"

class Bad_area {};

int area(int length, int width) {
    
    if (length <= 0 || width <= 0) throw runtime_error("Bad dimensions");
    return length * width;
}

int framed_area(int length, int width) {
    constexpr int frame_width = 2;
    return area(length - frame_width, width - frame_width);
}

int main()
{
    try {
        int x = -1;
        int y = 2;
        int z = 4;

        int area1 = area(x,y);
        int area2 = framed_area(1,y);
        int area3 = framed_area(y,z);
        double ratio = area1/area3;
        return 0;
    }
    catch (exception& e) {
        cerr << e.what() << '\n';
        return 1;
    }
}
