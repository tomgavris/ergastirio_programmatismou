//class me syntetagmenes x,y,z kai 4 methodus,3 pou tha anthetoun times sta x,y,z jexoorista kai mia
// pou ta knaei ola mazi, 3 idiotites poy tha epistrwfon x,y,z
//emfanizei kai tis treis times, 1 pou tha metakinei ena apo ta simeia kata mia thesi +dx(dinetai vw orisma)
#include <iostream>
using namespace std;

class box {
	public:
		float x, y, z, v;

		void xval(float x1){
			x=x1;
		}
		void yval(float y1){
			y=y1;
		}
		void zval(float z1){
			z=z1;
		}
		void valset(float a, float b, float c){
			x= a;
			y= b;
			z = c;
		}
		void print(){
			cout << "x = " << x << endl;
			cout << "y = " << y << endl;
			cout << "z = " << z << endl;
		}
		float revalx(){
			return x;
		}
		float revaly(){
		return y;
		}
		float revalz(){
			return z;
		}
		void move(float *b, float dx){
			*b=*b+dx;
		}
};


int main(){

	int x;
	char sel;
	float offset;
	box th;
	offset = 1;
	th.xval(5);
	th.yval(1);
	th.zval(10);


	cout << "Which value would you want to offset x, y, or z?" << endl;
	cin >> sel;
	while (sel!='x' && sel!='y' && sel!='z'){
        cout << "Please insert a valid value" << endl;
        cin >> sel;

	};
	switch(sel){
        case 'x':
            th.move(&th.x, offset);
            break;
        case 'y':
            th.move(&th.y, offset);
            break;
        case 'z':
            th.move(&th.z, offset);
            break;
	}
	th.print();
	return 0;
}
