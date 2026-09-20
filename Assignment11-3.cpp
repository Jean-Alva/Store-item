#include <iostream>
#include <cmath>
using namespace std;

class circleType{
    protected:
        double radius;
    public:
        void setRadius(double r){
            if(r >= 0){
                radius = r;
            }
        }
        double getArea(){
            return M_PI * radius * radius;
        }
        double getCircumference(){
            return 2 * M_PI * radius;
        }
};
class cylinderType : public circleType{
    private:
        double height;
    public:
        void setHeight(double h){
            if(h >= 0){
                height = h;
            }
        }
        double getVolume(){
            return getArea() * height;
        }
        double getSurfaceArea(){
            return 2 * getArea() + getCircumference() * height;
        }
};
int main(){
    double r, h;
    double costPerLiter, paintCostPerSqFt;

    cylinderType container;

    cout << "Enter the radius of the cylinder: ";
    cin >> r;

    cout << "Enter the height of the cylinder: ";
    cin >> h;

    cout << "Enter the cost of paint per liter: ";
    cin >> costPerLiter;
    
    cout << "Enter the cost of paint per square foot: ";
    cin >> paintCostPerSqFt;

    container.setRadius(r);
    container.setHeight(h);

    double volumeCubicFeet = container.getVolume();
    double volumeLiters = volumeCubicFeet * 28.3168;

    double shippingCost = volumeLiters * costPerLiter;
    double paintCost = container.getSurfaceArea() * paintCostPerSqFt;

    cout << "\nShipping Cost: $" << shippingCost << endl;
    cout << "Paint Cost: $" << paintCost << endl;

    return 0;
}