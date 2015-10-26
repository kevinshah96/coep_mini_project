#include<stdio.h>
#include<math.h>
#define size 128
float mean(float *p,int count);
float mode(float *p,int count);
float median(float *p,int count);
float firstquartile(float *p,int count);
float thirdquartile(float *p,int count);
float quartilerange(float *p,int count);
float standarddeviation(float *p,int count);
float variance(float *p,int count);
float skewness(float *p,int count);
float kurtosis(float *p,int count);
float findrange(float *p,int count);
float kurt(float *p,int count);
printmenu(){
	printf("1.enter the nos.\n");
	printf("2.mean\n");
	printf("3.median\n");
	printf("4.mode\n");
	printf("5. first quartile\n");
	printf("6.third quartile\n");
	printf("7.quartile range\n");
	printf("8.range\n");
	printf("9.variance\n");
	printf("10.standard deviation\n");
	printf("11.sort data ascending\n");
	printf("12.skewness\n");
	printf("13.kurtosis\n");
	printf("14.reset\n");
	printf("15.exit\n");
	}
int main(){
	int i,count=0;
	float a[size], *p;
	printmenu();
	printf("enter the choice");
	while(scanf("%d",&i))
		switch(i){
		case 1:	printf("enter the nos");
			while(scanf("%f",&a[count])){
				count++;}
			*p = a[0];
			printmenu();
			break;			
		case 2: printf("mean is %f ",mean(p,count));
			printmenu();
			break;
		case 3:printf("median is %f",median(p,count));
			printmenu();
			break;
		case 4:printf("mode is %f",mode(p,count));
			printmenu();
			break;
		case 5: printf("firstquartile is %f",firstquartile(p,count));
			printmenu();
			break;
		case 6: printf("thirdquartile is %f",thirdquartile(p,count));
			printmenu();
			break;
		case 7: printf("quartile range is %f",quartilerange(p,count));
			printmenu();
			break;
		case 8: printf("range is %f ",findrange(p,count));
			printmenu();
			break;
		case 9: printf("variance is %f ",variance(p,count));
			printmenu();
			break;
		case 10: printf("standard deviation is %f ",mean(p,count));
			printmenu();
			break;
		/*case 11: printf("sorted data is : ");
			for (i = 1;i< count ;i++){
				printf("%f",p[i]);
			printmenu();
			break;*/
		case 12: printf("skewness is %f",skewness(p,count));
				printmenu();
				break;
		case 13:printf("kurtosis is %f",kurtois(p,count));
				printmenu();
				break;
		case 14: p =(float*) NULL;
			count = 0;
			break;
		case 15 : 
			return 0;
}
}


