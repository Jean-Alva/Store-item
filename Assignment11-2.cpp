#include <iostream>
#include <cmath>

using namespace std;
class circleType {
    protected:
        double radius;
        double x, y;
    public:
        circleType(double r = 0, double xVal = 0, double yVal = 0) {
            radius = r;
            x = xVal;
            y = yVal;
        }
        void setRadius(double r) {
            if(r >= 0) {
                radius = r;
            }
        }
        double setCenter(double xVal, double yVal) {
            x = xVal;
            y = yVal;
        }
        double getArea() const {
            return M_PI * radius * radius;
        }
        double getCircumference() const {
            return 2 * M_PI * radius;
        }
        void print() const {
            cout << "Radius: " << radius << endl;
            cout << "Center: (" << x << ", " << y << ")" << endl;
            cout << "Area: " << getArea() << endl;
            cout << "Circumference: " << getCircumference() << endl;
        }
};
class cylinderType : public circleType {
    private:
        double height;
    public:
        cylinderType(double r = 0, double xVal = 0, double yVal = 0, double h = 0) : circleType(r, xVal, yVal) {
            height = h;
        }
        void setHeight(double h) {
            if(h >= 0) {
                height = h;
            }
        }
        double getVolume() const {
            return getArea() * height;
        }
        double getSurfaceArea() const {
            return 2 * getArea() + getCircumference() * height;
        }
        void print() const {
            circleType::print();
            cout << "Height: " << height << endl;
            cout << "Volume: " << getVolume() << endl;
            cout << "Surface Area: " << getSurfaceArea() << endl;
        }
};
int main(){
    cylinderType cyl(3, 5, 0, 0);

    cout << "Initial Cylinder:" << endl;
    cyl.print();

    cout << "\nAfter changes:\n";
    cyl.setRadius(4);
    cyl.setCenter(2, 3);
    cyl.setHeight(10);
    cyl.print();
    return 0;
}