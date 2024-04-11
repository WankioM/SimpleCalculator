#include <iostream>;
#include <chrono>;
#include <thread>;
#include <string>;

using namespace std;


class Cube{
    private:
        string material;
        double length;
        double width;
        double height;


    public:
        Cube() : material ("Unknown"), length (0.0), width (0.0), height (0.0){}

        Cube(string mat , double len,double wid, double hei): material(mat), length(len), width(wid), height(hei){}

        void setMaterial( string mat){
            material=mat;
        }

        void setDimensions (double len, double wid, double hei){
            length=len;
            width=wid;
            height=hei;
        }


         double calculateVolume() {
            double volume= length * width * height;
            cout << "Volume: " <<volume <<endl ;
            return volume;
        }

        // Function to display the properties of the cube
        void displayProperties() {
            cout << "Material: " << material << endl;
            cout << "Length: " << length << " units" << endl;
            cout << "Width: " << width << " units" << endl;
            cout << "Height: " << height << " units" << endl;
            cout << "Volume: " << calculateVolume() << " cubic units" << endl;
        }
};


int main(){
    
    // Creating a cube object
    Cube myCube("Wood", 5.0, 5.0, 5.0);

    // Displaying the properties of the cube
    myCube.displayProperties();

    // Changing the material of the cube
    myCube.setMaterial("Metal");

    // Changing the dimensions of the cube
    myCube.setDimensions(10.0, 13.0, 14.0);

    // Displaying the updated properties of the cube
    myCube.displayProperties();

    //Calculate Vloume
    myCube.calculateVolume();


    

    
    std::this_thread::sleep_for(std::chrono::milliseconds(8000));
}