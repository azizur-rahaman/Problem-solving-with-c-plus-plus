#include<stdio.h>
#include<stdbool.h>
const double pie = 3.141592654;

int factorial(int i){
    if(i == 0 || i == 1){
        return i;
    }
    return i * factorial(i-1);
}

double convertToRadian(double x){

    return (x * (pie/180));
}

double calculatePower(double x, int i){
    double x_m = x;

    for (int j = 1; j < i; j++) {
        x_m *= x;
    }

    return x_m;
}

int main(){
    double x;

    scanf("%lf", &x);
    

    x = convertToRadian(x);

    double result = x;
    bool isAddition = false;

    for (int i = 3; i < 20; i+=2)
    {   
        double result_of_power = calculatePower(x,i);
        int result_of_factorial = factorial(i);

        if(isAddition) {
            result+= result_of_power/result_of_factorial;
            isAddition = false;
        }else {
            result-= result_of_power/result_of_factorial;
            isAddition = true;            
        }
    }
    
    printf("%0.4lf", result);

}

