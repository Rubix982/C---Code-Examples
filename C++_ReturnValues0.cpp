#include <iostream>

class Vec3 {
    int x, y, z;

    public:
        Vec3() : x(0), y(0), z(0) {}
        Vec3(int a, int b, int c)
            : x(a), y(b), z(c) {}

        Vec3( const Vec3 & NewObj ) {}
        ~Vec3() {}

        friend std::ostream &operator<<(std::ostream &out, const Vec3 &Obj);
};

std::ostream & operator << ( std::ostream & out, const Vec3 & Obj ) 
{
    std::cout << "X: " << Obj.x << "\nY: " << Obj.y << "\nZ: " << Obj.z << "\n\n";
}

Vec3 SetNewObject(void) {
    int A, B, C;

    std::cin >> A >> B >> C;

    return {A, B, C};
}

int main() {
    Vec3 *ObjH = new Vec3();
    Vec3 ObjS(3, 4, 5);
    Vec3 Obj_ThroughFunction = SetNewObject();

    std::cout << *ObjH << ObjS << Obj_ThroughFunction;

    return 0;
}