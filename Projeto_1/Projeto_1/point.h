#ifndef POINT_H
#define POINT_H

class Point
{

private:
    float x, y;
public:
    void setX(float);
    void setY(float);
    void setXY(float, float);
    float getX(void);
    float getY(void);
    Point add(Point p1);
    Point sub(Point p1);
    float norma();
    void translada(float a, float b);
    void imprime();
};

#endif // POINT_H

