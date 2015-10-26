float mean(float *p,int count){
	float sum=0;
	float mean = 0;
	int i;
	for(i = 0;i < count;i++);
		sum = sum+p[i];
	mean = sum/(count);
	return mean; 
}	
