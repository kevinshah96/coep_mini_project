float sort(float *p,int count){
	int c,d;
	float t;
	for (c = 1 ; c <= count - 1; c++) {
		d = c;
 
	    while ( d > 0 && p[d] < p[d-1]) {
      			t  = p[d];
      			p[d]   = p[d-1];
      			p[d-1] = t;
			d--;
		}
	}
 return *p;
}
