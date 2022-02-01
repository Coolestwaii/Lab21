#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1, Rect R2){
	double olx, oly;
	
	if(R1.x + R1.w > R2.x){
		if(R1.x > R2.x) olx = R1.w - (R1.x - R2.x);
		else olx = R1.w - (R2.x - R1.x);
		
		if(olx > R1.w) olx = R1.w;
		else if(olx > R2.w) olx = R2.w;
		else olx = olx;

		if(R1.y > R2.y) oly = R1.h - (R1.y - R2.y);
		else oly = R1.h - (R2.y - R1.y);

		if(oly > R1.h) oly = R1.h;
		else if(oly > R2.h) oly = R2.h;
		else oly = oly;

		return olx * oly;
	}
	else return 0;
}

int main(){
	Rect R1 = {-1,2,6.9,9.6};
	Rect R2 = {0,0,1.2,2.5};
	cout << overlap(R1,R2);
}


/*if(R1.x > R2.x){
		if(R1.y < R2.y){
			if(R1.x + R1.w < R2.x + R2.w && R1.y + R1.w > R2.y + R2.w)
			else if(R1.x + R1.w < R2.x + R2.w && R1.y + R1.w < R2.y + R2.w)
			else if(R1.x + R1.w > R2.x + R2.w && R1.y + R1.w > R2.y + R2.w)
		}else if(R1.y > R2.y){
			if
		}
	}
	
	if(R1.x < R2.x){
		if(R1.x + R1.w > R2.x && R1.x + R1.w < R2.x + R2.w) overx = R1.x + R1.w - R2.x;
		else if(R1.x + R1.w >= R2.x + R2.w) overx = R2.x + R2.w;
	}else if(R1.x > R2.x){
		if(R1.x + R1.w <= R2.x + R2.w) overx = R1.x + R1.w;
		else if(R1.x + R1.w > R2.x + R2.w) overx = R1.x + R1.w - R2.x;

	double overlap(struct Rect r, struct Rect R){
	double r_x = r.x + r.w;
	double R_y = R.y - R.h;
	if (r_x - R.x < 0 || r.y - R_y < 0) return 0.f;
	double v_x = (r_x - R.x >= R.w) ? R.w : r_x - R.x;
	double v_y = (r.y - R_y >= R.h) ? R.h : r.y - R_y;
	return v_x * v_y;
}
	}*/