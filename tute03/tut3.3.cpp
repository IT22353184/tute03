#include <iostream>

struct box{
	
 	int Height;
	int Width ;
	int Length;
		
}box1,box2;
using namespace std;
int volume(int height, int width, int length);
int main() {
 int box1Height, box1Width, box1Length;
 int box2Height, box2Width, box2Length;
 int totalVolume;

 cout << "Enter Box 1 Height : ";
 cin >> box1.Height;
 cout << "Enter Box 1 Width : ";
 cin >> box1.Width;
 cout << "Enter Box 1 Length : ";
 cin >> box1.Length;
 
 cout<<endl;

 cout << "Enter Box 2 Height : ";
 cin >> box2.Height;
 cout << "Enter Box 2 Width : ";
 cin >> box2.Width;
 cout << "Enter Box 2 Length : ";
 cin >> box2.Length;
 
 cout<<endl;
 
 totalVolume = volume(box1.Height, box1.Width, box1.Length)
 + volume(box2.Height, box2.Width, box2.Length);

 cout << "Volume of Box is " << totalVolume << endl;
 
 return 0;
}

int volume(int Height, int Width, int Length){
	
	int total;
	
	total=(Height+Width+Length);
	
	return total;
}
