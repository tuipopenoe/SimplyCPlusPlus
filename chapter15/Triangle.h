#ifndef TRIANGLE_H
#define TRIANGLE_H
#endif

class Triangle{
    public:
        Triangle();
        Triangle(int, int, int);
        bool isRightTriangle();
        bool isEquilateralTriangle();

        int getSide1();
        int getSide2();
        int getSide3();

        void setSide1(int);
        void setSide2(int);
        void setSide3(int);

    private:
        int side1;
        int side2;
        int side3;
};