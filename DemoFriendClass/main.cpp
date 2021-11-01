#include <iostream>
using namespace std;

// klasse die friend bevat eerst definiëren!
class Square {
    friend class Rectangle; // friend maken
private:
    int side;
public:
    Square(int a) : side(a) {} // initializer list bij constructor; in size zit nu de waarde van a
};


// friend-klasse die toegang heeft tot alles van Square klasse
class Rectangle {
    int width, height;
public:
    Rectangle(int w = 1, int h = 1) : width(w),height(h) {} // initializer list bij constructor
    int area() const {
        return width * height;
    }
    void convert(const Square &a); // krijgt een Square object mee
};

void Rectangle::convert(const Square &a) { // krijgt een Square object mee
    width = a.side; // Omdat Rectangle friend is van Square, kan hij aan Square z'n side attribuut
    height = a.side; // idem
}

int main () {
    Rectangle rect(6,8);
    cout << rect.area() << endl;
    Square sqr(4);
    rect.convert(sqr);
    cout << rect.area();
    return 0;
}