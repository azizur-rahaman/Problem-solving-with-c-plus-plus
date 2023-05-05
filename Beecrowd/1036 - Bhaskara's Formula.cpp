/*
Read 3 floating-point numbers. After, print the roots of bhaskara’s formula. If it's impossible to calculate the roots because a division by zero or a square root of a negative number, presents the message “Impossivel calcular”.
*/
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
    double a,b,c,t,R1,R2;
    cin>>a>>b>>c;

    if(((b*b)-4*a*c)<0 ||a==0){
        cout<<"Impossivel calcular"<<endl;
    }else{
         t=sqrt((b*b)-4*a*c);
         R1=((-b + t) / (2 * a));
         R2=((-b - t) / (2 * a));
         cout<<fixed;
         cout<<setprecision(5)<<"R1 = "<<R1<<endl;
         cout<<setprecision(5)<<"R2 = "<<R2<<endl;
    }
    return 0;
}


// solution two - m
// #include<iostream>
// #include<cmath>
// using namespace std;

// int main(){
//     double a,b,c; 
//     cin>>a>>b>>c;
    

//     if(a!=0){
        
//     double determinant = sqrt((b*b)-(4*a*c));
    
//          if(determinant>0){
//                 double result1 = (-b+(determinant))/(2*a);
//             double result2 = (-b-(determinant))/(2*a);
            
//             printf("R1 = %.5lf\n",result1);
//         printf("R1 = %0.5lf\n",result2);
          
//          }else{
//               cout<<"Impossivel calcular"<<endl;
//          }
     
//     }else{
//         cout<<"Impossivel calcular"<<endl;
//     }
// }