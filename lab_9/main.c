#include <stdio.h>
//var21
void t_1(){
    char s[0];
    scanf("%s",s);
    int c_d=0,c_s=0,c_b=0,i=0;
    while(s[i]!='\0'){
        if((s[i]>=48) & (s[i]<=57)){
            c_d++;
        }else if(s[i]>=65 && s[i]<=90){
            c_b++;
        }else if(s[i]>=97 & s[i]<=122){
            c_s++;
        }
        i++;
    }
    printf("count digit=%d\nbig count=%d\nsmall count=%d",c_d,c_b,c_s);
}
void t_2(){
    int cost_per_month,cost_upper_limit,time,total_cost;
    printf("time=");
    scanf("%d",&time);
    printf("cost per month=");
    scanf("%d",&cost_per_month);
    printf("cost upper limit=");
    scanf("%d",&cost_upper_limit);
    if(time>499){
        total_cost=((time-499)*cost_upper_limit)+cost_per_month;
        printf("total cost=%d",total_cost);
    }else{
        printf("total cost=%d",cost_per_month);
    }
}
int main() {//var21
    t_1();
    t_2();
    return 0;
}