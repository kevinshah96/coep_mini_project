#include<stdio.h>
typedef struct node{	
	float q;
	int c ;
	}node;
float mode(float *p,int count){
	node a[count];
	int d,i;
	for(i = 0; i< count;i++){
		a[i].c = 0;
	}//putting all elements in a[i].c=0
	/*compare the elements in node and array 
	if same c++; if not there c=1;*/
	for(d=0;d < count;d++){
		i=0;
		for(i=0;i <count;i++ ){
			if(p[d] == a[i].q){
				(a[i].c)++;
			}
		  	else{
				a[i].q = p[d];
				a[i].c=1;
			}
		}
	}
	for(i=1;i<count;++i) 
    {
       if(a[0].c<a[i].c) 
           a[0].c=a[i].c;
    }
	return a[0].c;
}
