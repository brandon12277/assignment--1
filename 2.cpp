#include<iostream>
#include<math.h>

using namespace std;

class Triangle{
    private:
      double side1,side2,side3;
      double area,perimeter;
    
    public:

        Triangle(){
            side1 = -1;
            side2 = -1;
            side3 = -1;
            area = -1;
            perimeter = -1;
        }
      
       void TakeInput(){

        cout<<"Enter dimensions of the triangle"<<endl;
        cin>>side1>>side2>>side3;
        if(!(side1+side2>side3 && side2+side3>side1 && side3+side1>side2)){
            cout<<"Invalid Input"<<endl;
            side1 = -1;
            side2 = -1;
            side3 = -1;  
        }
        
       }
       void printData(){
            if(side1<0 || side2<0 || side3<0){
        TakeInput();
    }

           if(area == -1){
            CalculateArea();
           }

           if(perimeter  == -1){
           CalculatePerimeter();
           }

           cout<<"Dimensions of triangle : ";
           cout<<side1<<endl;
           cout<<side2<<endl;
           cout<<side3<<endl;
           cout<<"Perimeter of the triangle : "<<perimeter<<endl;
           cout<<"Area of triangle : "<<area<<endl;
 
          
       }
       void CalculatePerimeter();
       void CalculateArea();
};


void Triangle::CalculatePerimeter(){
      
    if(side1<0 || side2<0 || side3<0){
        TakeInput();
    }

    perimeter = side1+side2+side3;
    cout<<"Perimeter Calculated........."<<endl;

}
void Triangle::CalculateArea(){
      
    if(side1<0 || side2<0 || side3<0){
        TakeInput();
    }

    double s = (side1+side2+side3)/2;
     
    area = (s*(s-side1)*(s-side2)*(s-side3));
    area = sqrt(area);



    cout<<"Area Calculated........."<<endl;

}

int main(){
    Triangle tri;
    tri.TakeInput();
    tri.CalculatePerimeter();
    tri.CalculateArea();
    tri.printData();
}