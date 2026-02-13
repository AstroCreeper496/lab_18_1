#include<iostream>
#include<algorithm>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect a, Rect b){
    double interw,interh;
    if (b.x-a.x >= a.w) return 0;
    else if (b.y-a.y >= b.h) return 0;
    else {
        interw = a.x + a.w - b.x;
        interh = a.y + a.h - b.y;
    if (a.x <= b.x && b.x + b.w <= a.x + a.w) interw = b.w;
    if (b.x <= a.x && a.x + a.w <= b.x + b.w) interw = a.w;
    if (a.y >= b.y && b.y - b.h >= a.y - a.h) interh = b.h;
    if (b.y >= a.y && a.y - a.h >= b.y - b.h) interh = a.h;
    //cout << (a.x <= b.x) << (b.x + b.w <= a.x + a.w) <<interw << " " << interh << " ";
    return interw*interh;
    }
}
