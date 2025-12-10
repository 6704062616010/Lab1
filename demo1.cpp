#include<stdio.h>
main()
{
	float mid,final,q1,q2,lab,sit;
	float s1,s2,s3,s4,s5,s6,sum;
	//mid = 75;
	//final = 85;
	//q1 = 40;
	//q2 = 45;
	//lab = 16;
	//sit = 15;
	
	
	scanf("%f %f %f %f %f %f",&mid,&final,&q1,&q2,&lab,&sit);
	s1 = (mid*30)/100;
	s2 = (final*35)/120;
	s3 = (q1*12)/60;
	s4 = (q2*13)/60;
	s5 = (lab*5)/16;
	s6 = (sit*5)/16;
	sum = s1+s2+s3+s4+s5+s6;
	
	printf("%10s=%8.0f => %.4f\n","Mid",mid,s1);
	printf("%10s=%8.0f => %.4f\n","Final",final,s2);
	printf("%10s=%8.0f => %.4f\n","Q1",q1,s3);
	printf("%10s=%8.0f => %.4f\n","Q2",q2,s4);
	printf("%10s=%8.0f => %.4f\n","Lab",lab,s5);
	printf("%10s=%8.0f => %.4f\n","Sit",sit,s6);
	printf("*****%.4f*****",sum);
}
