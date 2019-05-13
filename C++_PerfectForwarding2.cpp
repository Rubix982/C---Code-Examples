struct W {
    W(int &, int &) {}
};

struct X {
    X(int &, const int &) {}
};

struct Y {
    Y(const int &, int &) {}
};

struct Z {
    Z(const int &, const int &) {}
};

template<typename T, typename A1, typename A2>
T* factory(A1 & a1, A2 & a2 ) {
    return new T(a1, a2);
}

int main(void) {

    int a = 4, b = 5;
    W * ptrW = factory<W>(a, b);

    return 0;
}