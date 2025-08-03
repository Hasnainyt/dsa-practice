/*#include<stdio.h>
#include<string.h>


int main(){
    typedef struct bankdata{
 int acc ;
 char name[100];
 int age;
}xyz;

xyz s1 ={111,"has",18};
xyz s2={121,"ghr",19};
xyz s3={131,"hasty",20};


printf("acc no is %d\n name is %s\nage is %d\n",s1.acc,s1.name,s1.age);

printf("acc no is %d\n name is %s\nage is %d\n",s2.acc,s2.name,s2.age);

printf("acc no is %d\n name is %s\nage is %d\n",s3.acc,s3.name,s3.age);

    return 0;
}
 


//write a program to add sub multiply and divide 3 num
#include<stdio.h>
int main(){
int a ;
int b;
int c;
printf("enter a ,b,c \n");

scanf("%d", &a);

scanf("%d", &b);

scanf("%d", &c);

printf("sum = %d\n",(a+b)+c
);
printf("substract = %d\n",(a-b)-c
);
printf("multipy= %d\n",(a*b)*c
);
printf("divide = %d\n",(a/b)/c
);

    return 0;
}


//program to calculatearea and perimeter for squarecircle  and rectangle
#include<stdio.h>
int main(){
int side,length ;
float radius;
printf("enter side and lenght");
scanf("%d%d",&side,&length);
printf("area of square =%d\n perimeter = %d",side*side,4*side);
printf("area of rectangle =%d \n perimeter=%d\n",side*length,2*(side+length));
printf("enterradius of circle");
scanf("%f",&radius);
printf("area =%f\n circumference =%f",3.14*radius*radius,2*3.14*radius);
    return 0;
}


//program to report bmi of a person

#include<stdio.h>
int main(){
float w,h,bmi;
printf("enterweught in  kg and height in meter");
scanf("%f%f",&w,&h);

bmi=w/(h*h);
 if(bmi>0 &&bmi<=15){
    printf("bmi = %f,starvation",bmi);
  }
   else if(bmi>15 && bmi<=17.5){
        printf("bmi=%f, anorexic",bmi);
    }
    else if(bmi>17.5 && bmi<=18.5){
        printf("bmi=%f, underwt",bmi);
    }
        else if(bmi>18.5 && bmi<=24.9){
            printf("bmi=%f, ideal",bmi);}
            else if(bmi>24.9 && bmi<=29.9){
                printf("bmi=%f, overwt",bmi);}
                else if(bmi>29.9 && bmi<=39.9){
                    printf("bmi=%f, obese",bmi);}
                    else if(bmi>39.9){
                        printf("bmi=%f, morbidly obsese",bmi);
 }
 else{
    printf("wromg entererd value");
 }


return 0;
}


//absolute of num and othercheck 3 ptsform triangle or not
#include<stdio.h>
int main(){
int num;
scanf("%d",&num);
if(num>=0){
    printf("absolute value = %d",num);
}
else {
    printf("absol val =%d",-num);
}






    return 0;
} 



#include<stdio.h>
//patttenn mischief

int main(){ 

    for(int i=1;i<=5;i++){

        for(int j=1;j<=i;j++){
            printf("%d",j);      
          } printf("\n");
    } 
   
return 0;

}
    

    #include<stdio.h>
    int main(){
int n =5;
for(int i=1;i<=n;i++){

for(int j =1;j<=n-i;j++){
    printf(" ");
}

    for(int i=1;i<=5;i++){
 printf("*");
    }printf("\n");
}



    return 0;
} 


#include<stdio.h>
int main(){
int n =5;
//left side
for(int i=1;i<=n;i++){

for(int j=1;j<=n-i;j++){
printf(" ");
}

for(int j=i;j>=1;j--){
printf("%d",j);
}
for(int j=1;j<=i;j++){
    printf("%d",j);

}printf("\n");


}
return 0;
} 
*/
