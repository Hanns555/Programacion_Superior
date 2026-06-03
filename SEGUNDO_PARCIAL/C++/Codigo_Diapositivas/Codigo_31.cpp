#include <iostream>

using namespace std;

class Box{
	public:
		virtual double getVolume()=0;
	protected:
		double lenght;
		double breadth;
		double height;
};

class VolumeBox:public Box{
	public:
	VolumeBox(double lenght,double breadth,double height){
			this->lenght=lenght;
			this->breadth=breadth;
			this->height=height;
	}

	double getVolume() override{
		return (lenght*breadth*height);
	}
};

int main(){
	VolumeBox Figura(20.0,10.0,20.0);
	printf("El volumne de la figura es: %.2f\n",Figura.getVolume());
	return 0;
}
