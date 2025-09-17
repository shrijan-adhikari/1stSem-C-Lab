#include<stdio.h>
int main() {
    float weight,height,BMI;
    printf("enter weight in kg = ");
    scanf("%f",&weight);
    printf("enter height in mts = ");
scanf("%f",&height);
BMI=weight/(height*height);
if(BMI<15 && BMI>0){
    printf("Starvation");
    
} 
else if (BMI>=15.1 && BMI<=17.5){
    printf("Anorexic");
}
else if (BMI>=17.6 && BMI<=18.5){
    printf("Underweight");
}
else if (BMI>=18.6 && BMI<=24.9){
    printf("Ideal");
}
else if (BMI>=25 && BMI<=25.9){
    printf("overweight");
}
else if (BMI>=30 && BMI<=39.9){
    printf("obese");
}
else if (BMI>40){
    printf("Morbidity Obese");
} 
return 0;
}