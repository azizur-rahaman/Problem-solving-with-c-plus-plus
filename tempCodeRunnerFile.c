#include <stdio.h>


int main() {
    int student_n;
    printf("Enter Student number in section: ");
    scanf("%d", &student_n);

    for (int i = 0; i < student_n; i++)
    {   
        int id;
        float totalMarks=0;

        printf("\n Student_ID: ");
        scanf("%d", &id);
        printf("\n");

        for (int i = 0; i < 5; i++)
        {   
            float temp;
            scanf("%f", &temp);
            totalMarks += temp;
        }

        printf("Total Mrks = %d\n", totalMarks);

        printf("Grade = ");
        if(totalMarks>=90) printf("A");
        else if(totalMarks >= 70 && totalMarks < 90) printf("A");
        else if(totalMarks >= 50 && totalMarks < 70) printf("B");
        else printf("F");

    }
    
    

    return 0;
}
