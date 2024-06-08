#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class Shapes{
	int radius;
	int diameter;
	int height;
	int side;
	public:
		Shapes(){}
		Shapes(int r, int d, int h, int s){
			r = radius;
			d = diameter;
			h = height;
			s = side;
		}
	void draw_Circle() {
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    diameter = 2 * radius;

    for (int i = 0; i <= diameter; i++) {
        for (int j = 0; j <= diameter; j++) {
            float distance = sqrt((i - radius) * (i - radius) + (j - radius) * (j - radius));

            if (distance > radius - 0.5 && distance < radius + 0.5)
                cout << "*";
            else
                cout << " ";
        }
        cout <<endl;
    }
    
    
}

    void draw_Triangle(){
    cout << "Enter the height of the triangle: ";
    cin >> height;

    for (int i = 1; i <= height; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout <<endl;
    }

   
	}
	
	void draw_Square(){
    cout << "Enter the side length of the square: ";
    cin >> side;

    for (int i = 0; i < side; ++i) {
        for (int j = 0; j < side; ++j) {
            cout << "* ";
        }
        cout <<endl;
    }

	}
};
int main(){
	Shapes sh;
	int choice;
	cout<<"Enter the name of the Shape you want to draw, 1. Circle , 2. Triangle, 3. Square :  ";
	cin>>choice;
	
	switch(choice){
		case 1:
			sh.draw_Circle();
			break;
		
		case 2:
			sh.draw_Triangle();
			break;
			
		case 3:
			sh.draw_Square();
			break;
	}
	
	return 0;
}