/*
Read three integers and sort them in ascending order. After, print these values in ascending order, a blank line and then the values in the sequence as they were readed.
*/

#include<iostream>
#include<iomanip>
using namespace std;

void withLoop(int n1, int n2, int n3){
   int numberList[3] = {n1,n2,n3};
   int temp = 0;

   for (int i = 0; i < 3; i++)
   {
        for (int j = i+1; j < 3; j++)
        {
            if (numberList[i]>numberList[j])
            
            {
                // cout<<"before: "<<numberList[i]<<numberList[j]<<endl;
                temp=numberList[i];
                numberList[i]=numberList[j];
                numberList[j]=temp;
                // cout<<"after: "<<numberList[i]<<numberList[j]<<endl;


            }
            
        }
        
   }
   
   for (int i = 0; i < 3; i++)
   {
        cout<<numberList[i]<<endl;
   }
   cout<<endl<<n1<<endl<<n2<<endl<<n3<<endl;
   
}
 
 
int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;

    withLoop(n1, n2,n3);

 
}
   


    

void withoutLoop(int n1, int n2, int n3){
       if(n1>n2){
        if(n1>n3){
            if(n2>n3){
                cout<<n3<<endl<<n2<<endl<<n1<<endl;
            }else{
                cout<<n2<<endl<<n3<<endl<<n1<<endl;
            }
        }else {
            cout<<n2<<endl<<n1<<endl<<n3<<endl;
        }
    }else if(n2>n3){
        if(n1>n3){
            cout<<n3<<endl<<n1<<endl<<n2<<endl;
        }else{
            cout<<n1<<endl<<n3<<endl<<n2<<endl;
        }
    }else {
        cout<<n3<<endl<<n2<<endl<<n1<<endl;
    }

    cout<<endl<<n1<<endl<<n2<<endl<<n3<<endl;
}