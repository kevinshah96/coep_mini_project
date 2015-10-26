float sort(float*p,int count);
float firstquartile(float* p ,int count){
/*aim is to find the median of 1st half of array*/
	float q[count/2] , a;
	int c;
	*p = sort(p,count);
	for(c=0 ;c<count/2;c++){
		q[c] = p[c];
	}
	a = median (q,count/2);
	return a;
	}
float thirdquartile(float* p ,int count){
/*aim is to find the median of 1st half of array*/
	float q[count/2] , a;
	int c;
	*p = sort(p,count);
	for(c=count ;c > count/2;c--){
		q[c] = p[c];
	}
	a = median (q,count/2);
	return a;
}
float quartilerange(float *p,int count){
	float a,b,range;
	a = firstquartile(p,count);
	b = thirdquartile(p,count);
	range = b-a;
	return range;
}
	
