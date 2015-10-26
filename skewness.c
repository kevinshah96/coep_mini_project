#include <stdio.h>
#include <math.h>
float mean(float *p,int count);
float median(float *p,int count);
float skewness(float *p,int count){
	float mea,med,sd,s;
	mea = mean(p,count);
	med =median(p,count);
	sd = standarddeviation(p,count);
	s = (3*(mea-med))/sd;
	return s;
	}
float kurtosis(float *p,int count){
	float sd,sum=0,mea,k;
	int i;
	mea = mean(p,count);
	for(i=0;i<count;i++){
		sum=sum+pow((p[i]-mea),4);
	}
	sd =standarddeviation(*p,count);
	k = sum/(pow(sd,4)*count-1);
	}
	
