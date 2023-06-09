/*
Read four numbers (N1, N2, N3, N4), which one with 1 digit after the decimal point, corresponding to 4 scores obtained by a student. Calculate the average with weights 2, 3, 4 e 1 respectively, for these 4 scores and print the message "Media: " (Average), followed by the calculated result. If the average was 7.0 or more, print the message "Aluno aprovado." (Approved Student). If the average was less than 5.0, print the message: "Aluno reprovado." (Reproved Student). If the average was between 5.0 and 6.9, including these, the program must print the message "Aluno em exame." (In exam student).

In case of exam, read one more score. Print the message "Nota do exame: " (Exam score) followed by the typed score. Recalculate the average (sum the exam score with the previous calculated average and divide by 2) and print the message “Aluno aprovado.” (Approved student) in case of average 5.0 or more) or "Aluno reprovado." (Reproved student) in case of average 4.9 or less. For these 2 cases (approved or reproved after the exam) print the message "Media final: " (Final average) followed by the final average for this student in the last line.
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float score1,score2,score3,score4;
    cin>>score1>>score2>>score3>>score4;

    float average = ((score1*2)+(score2*3)+(score3*4)+score4)/ 10.0;
    cout<<fixed<<setprecision(1)<<"Media: "<<average<<endl;

    if(average>=7.0){
        cout<<"Aluno aprovado."<<endl;
    }else if(average>=5.0 && average<=6.9){
        //in exam
        cout<<"Aluno em exame."<<endl;
        
        float moreInput;
        cin>>moreInput;
        cout<<"Nota do exame: "<<moreInput<<endl;

        float finalAverage = (average+moreInput)/2;

        if(finalAverage>=5.0){
            cout<<"Aluno aprovado."<<endl;
        }
        cout<<fixed<<setprecision(1)<<"Media final: "<<finalAverage<<endl;
    }else if(average<5.0){
        cout<<"Aluno reprovado."<<endl;
    }
    }