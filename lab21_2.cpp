#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R1, Rect *R2){
	double olx, oly;
	if(R1->x + R1->w > R2->x){
		if(R1->x > R2->x) olx = R1->w - (R1->x - R2->x);
		else olx = R1->w - (R2->x - R1->x);

		if(olx > R1->w) olx = R1->w;
		else if(olx > R2->w) olx = R2->w;
		else olx = olx;

		if(R1->y > R2->y) oly = R1->h - (R1->y - R2->y);
		else oly = R1->h - (R2->y - R1->y);

		if(oly > R1->h) oly = R1->h;
		else if(oly > R2->h) oly = R2->h;
		else oly = oly;

		return olx * oly;
	}else return 0;
}

int main(){
	Rect R1 = {1,1,5,5};
	Rect R2 = {2,2,5,5};	
	cout << overlap(&R1,&R2);
}
