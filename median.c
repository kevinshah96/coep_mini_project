float sort(float *p,int count);
float median(float *p, int count){
	float x[count];
	float median;
	x[0] = sort(p,count);
	if(count % 2 == 1){
		median = x[(count+1)/2];
	}
	else if(count % 2 == 0){
		median =( x[count/2] +x[count/2 +1])/2;
	}
	return median;
	}
