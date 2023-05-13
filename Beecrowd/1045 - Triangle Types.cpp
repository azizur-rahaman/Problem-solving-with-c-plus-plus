#include<iostream>
using namespace std;

int main(){
    double a,b,c,temp;
    cin>>a>>b>>c;

    double triangleList[3]={a,b,c};

    for (int i = 0; i < 3; i++)
    {
        for (int j = i+1; i < 3; j++)
        {
            if (triangleList[i]<triangleList[j]){
                temp = triangleList[i];
                triangleList[i]=triangleList[j];
                triangleList[j]=temp;
            }
            
            
        }
        
    }
    if(triangleList[0]>= (triangleList[1]+triangleList[2])){
        cout<<"NAO FORMA TRIANGULO"<<endl;

    }else if((triangleList[0]*triangleList[0])== ((triangleList[1]*triangleList[1])+(triangleList[2]*triangleList[2]))){
        cout<<"TRIANGULO RETANGULO"<<endl;
    }else if((triangleList[0]*triangleList[0])> ((triangleList[1]*triangleList[1])+(triangleList[2]*triangleList[2]))){
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    }else if((triangleList[0]*triangleList[0])< ((triangleList[1]*triangleList[1])+(triangleList[2]*triangleList[2]))){
        cout<<"TRIANGULO ACUTANGULO"<<endl;
    }

    if(a==b==c){
        cout<<"TRIANGULO EQUILATERO"<<endl;
    }else if((a==b)||(b==c)||(c==a)){
        cout<<"TRIANGULO ISOSCELES"<<endl;
    }
    
}