#include<math.h>
#include<stdio.h>
float standarddeviation(float *p, int count){
	int c;
	float m,sum=0,r;
	m = mean(*p,count);
	for(c = 0;c < count;c++){
		sum = sum + (p[c]-m);
	}
	r = sqrt(sum/count);
	return sqrt(r);
}
float variance(float *p, int count){
	float sd;
	sd = standarddeviation(p,count);
	return pow(sd,2);
	}

