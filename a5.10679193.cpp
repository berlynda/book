#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

struct Student
{
    int ID_number[5];
    string name[5];
    int Age[5];
    string Gender[5];
    double Score[5];
    string grade[5];

};
int main()

{

    double totalScores=0;
    int  totalAgeS=0;

    int numOf_males=0;

    int numOf_females=0;

    double averageScore=0;

    double averageAge=0;

    int number_of_students;

    number_of_students=5;

    double my_score;

    Student wask;

    for (int i=0; i<number_of_students; i++)

    {
       cout << " Enter your ID  :";
       cin >> wask.ID_number[i];
       cout << "\n Enter your Name  :";
       cin >> wask.name[i];
       cout << "\n Enter your age  :";
       cin >> wask.Age[i];
       cout << "\n Enter your Gender  :";
       cin >> wask.Gender[i];
       cout << " Enter your Score  :";
       cin >> wask.Score[i];

       if (wask.Score[i]>80 && wask.Score[i]<=100)
       {
           wask.grade[i]="A";
       }

       else if (wask.Score[i] >=70 && wask.Score[i] <80)
       {
           wask.grade[i]="B";
       }
       else if (wask.Score[i]>=60 && wask.Score[i] <70)
       {
           wask.grade[i]="C";
       }
       else if(wask.Score[i]>=50 && wask.Score[i]<60)
       {
           wask.grade[i]="D";
       }
       else if(wask.Score[i] >=40 && wask.Score[i]<50 )
       {
           wask.grade[i]="E";
       }
       else
       {
           wask.grade[i]="F";
       }


       cout << endl;

                  if (wask.Gender[i]=="male")
           {
               num_Of_male++;
           }
           else if( wask.Gender[i]=="female")
           {
               num_Of_female++;
           }


    }


cout << "*************************************************************************************************" <<endl;
cout << " ID" << "      " << "Name " << "       " << "Age" << "             " << "Gender " << "         " << "Score" << "        " << "Grade " << endl;

cout << "************************************************************************************************" << endl;
    for (int i=0;i <number_of_students; i++)
    {

        total_scores=total_scores + wask.Score[i];

           total_age= total_age + wask.Age[i];

          average_score= total_scores/number_of_students;

           average_age= total_age/number_of_students;

            cout << wask.ID_number[i] << "\t" << wask.name[i] << "\t" << wask.Age[i] << "\t" << wask.Gender[i];
        cout << "\t" << wask.Score[i] << "\t" << wask.grade[i] ;

       cout << endl;
    }



    cout << "The average age is  :"<< average_age << endl;

    cout << "The average score is  :"<< average_score << endl;

    cout << "The number of females are  :"<< num_of_females << endl;

    cout << "The number of males are  :"<< num_of_males << endl;

    ofstream student;
    student.open("Mystudents.txt", ios:: app);

    student << "*************************************************************************************************" <<endl;

    student << " ID" << "  " << "Name " << "     " << "Age" << "      " << "Gender " << "     " << "Score" << "       " << "Grade " << endl;

    student <<  "************************************************************************************************" << endl;

     for (int i=0;i <number_of_students; i++)
    {

          total_scores=total_scores+wask.Score[i];

           total_age= total_age+wask.Age[i];

          average_score= total_scores/number_of_students;

           average_age= total_age/number_of_students;


     student << "The average age is:
            student << wask.ID_number[i] << "\t" << wask.name[i] << "\t" << wask.Age[i] << "\t" << wask.Gender[i];
        student << "\t" << wask.Score[i] << "\t" << wask.grade[i] ;

       student << endl;
    }  " << average_age << endl;

    student << "The average score is  :"<< average_score << endl;

    student << "The number of females :"<< num_of_female << endl;

    student << "The number of males are  :"<< num_of_males << endl;

    student.close();




    return 0;
}
