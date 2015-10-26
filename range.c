float findmax(float *p,int count){
        int c;
        float max,temp;
        max = p[0];
        for(c = 1; c < count;c++){
                if(p[c] > max){
                        temp = max;
                        max = p[c];
                        p[c]= temp;
                }
        }
        return max;
        }
float findmin(float *p,int count){
        int c;
        float min,temp;
        min =p[0];
        for(c = 1; c < count;c++){
                if(p[c] < min){
                        temp = min;
                        min = p[c];
                        p[c]= temp;
                }
        }
        return min;
        }



float findrange(float *p,int count){
	float mi,ma;
	mi = findmin(p,count);
	ma = findmax(p,count);
	return ma-mi;
	}

	
		
	
