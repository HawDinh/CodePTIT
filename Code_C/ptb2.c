#include <stdio.h> 
#include <math.h>
int main(){
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	if (a==0 && b==0 && c!=0){
		printf("NO");
	}else if (a==0 && b!=0){
		printf("%.2f",-c/b);
	}else{
		float denta=b*b-4*a*c;
		if(denta<0){
			printf("NO");
		}
			else if(denta==0){
				printf("%.2f",-b/(2*a));
			}else{
				printf("%.2f %.2f",(-b+sqrt(denta))/(2*a),(-b-sqrt(denta))/(2*a));
			}
		}
		return 0;
	}
