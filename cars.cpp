#include <iostream>
#include <string>
using namespace std;

class Car {
protected:
    string modelName;
public:
    void SetName(string n) {
        modelName = n;
    }
    string GetName() const {
        return modelName;
    }
};

class model : public Car {
private:   
    int year;
public:
    void SetYear(int y) {
        year = y;
    }
    int GetYear() const {
        return year;
    }
};

int main() {
    model myCar;
    myCar.SetName("Toyota Camry");
    myCar.SetYear(2025);

    cout << "Model: " << myCar.GetName() << endl
         << "Year: " << myCar.GetYear() << endl;
    return 0;
}