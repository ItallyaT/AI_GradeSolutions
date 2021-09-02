#include <iostream> 
#include <fstream>
#include <sstream>
#include <math.h>
using namespace std;

 
class Finalgrade
{
    protected:
        double average;
        string major;
        int nstu;
        string rr;
        
    public:
        Finalgrade (double score1 = 0, double score2 = 0) {} 
        
        //-Overridng to implement polymorphism
        virtual void AskForHon_roll ()
        {
            float GPA[100];
            int range;
            string rr;
            string major;
            
            cout << " Please enter students first name: " << "\n";
            cin >> rr;
            cout << endl;
            
            cout << "Please enter the initials of your major: " << "\n";
            cin >> major;
            cout << endl;
            
            cout << "Students name iS : " << rr << "\n" << "Students major is: " << major << "\n";
            cout << endl;
            
            cout << "How many students want to print GPA: ";
            cin >> range;
            cout << endl;
            
            for (int i = 1; i <= range; i++)
            {
                cout << "Please Enter students GPA: ";
                cin >> GPA[i];
                cout << endl;
            }
            
            for (int i = 1; i <= range; i++)
            {
                cout << GPA[i] << " ";
            }
            
            cout << endl;
            
            for (int i = 1; i <= range; i++)
            {
                //Loop to present claculation of GPA
                if (GPA[i] == 4)
                {
                    cout << "Congratulations you have made the deans List:  " << GPA[i] << " A" << endl;
                }
                
                else if (GPA[i] >= 3 and GPA[i] <= 3.9)
                {
                    cout << "Congratulations you are in great Academic Standing: " << GPA[i] <<" B" << endl;
                }
                
                else if (GPA[i] >= 2 and GPA[i] <= 2.9)
                {
                    cout << "Congratulations your in good Academic Standing: " << GPA[i] << " C" << endl;
                }
                
                else if (GPA[i] >= 1 and GPA[i] <= 1.9)
                {
                    cout << "Unfortunatly your GPA needs work:  " << GPA[i] << " D" << endl;
                }
                
                else if (GPA[i] >= 0 and GPA[i] <= 0.9)
                {
                    cout << "Course Failed. " << GPA[i] << " F"<< endl;
                }
            }
        }
        
        string LGrade()
        {
            string rr;
            string major;
            
            //Ask for name of student to store data
            cout << " Please enter student Name: " << "\n";
            cin >> rr;
            cout << endl;
            
            //initials to identify the major
            cout << "please Enter the initials of your Major: " << "\n";
            cin >> major;
            cout << endl;
            
            //Prints the name and major of student
            cout << "Students name iS : " << rr << " \n" << "Students major is: "<< major;
            cout << "\n Forced segment dump.";
            cout << endl;
        }
};
 
class Math: public Finalgrade
{
    public: 
        Math (double score1 = 0, double score2 = 0):Finalgrade (score1, score2) {}
        double LGrade() //<-Overridng function from parent class to input user values for grades
        {
            double score1;
            double score2;
            
            cin >> score1;
            cin >> score2;
            
            double average = (score1 + score2) / 2;
            cout << "Final Score: " << average << endl;
            cout << "Final Letter Grade: ";
            
            if (average >= 90)
            {
                cout << "A" << endl;
            }
            
            else if ((average < 89.5) && (average >= 80.0))
            {
                cout << "B" << endl;
            }
            
            else if ((average < 80.0) && (average >= 70.0))
            {
                cout << "C" << endl;
            }
            
            else if ((average < 69.9) && (average >= 65))
            {
                cout << "D" << endl;
            }
            
            else
            {
                cout << "F" << endl;
            }
            
            return (average);
        }
};

 
class English: public Finalgrade
{
    public: 
        English (double score1 = 0, double Score2 = 0):Finalgrade (score1, Score2){} 
        double LGrade ()
        {
            double score1;
            double score2;
            
            cin >> score1;
            cin >> score2;
            
            double eaverage = (score1 + score2) / 2;
            cout << "Final Score: " << eaverage << endl;
            cout << "Final Letter Grade: ";
            
            if (eaverage >= 90.0)
            {
                cout << "A" << endl;
            }
            
            else if ((eaverage < 90.0) && (eaverage >= 80.0))
            {
                cout << "B" << endl;
            }
            
            else if ((average < 80.0) && (average >= 70.0))
            {
                cout << "C" << endl;
            }
            
            else if ((average < 69.9) && (average >= 65))
            {
                cout << "D" << endl;
            }
            
            else
            {
                cout << "F" << endl;
            }
            
            return (eaverage);
        }
};
 
 
 
  //main function for the program
int main ()
{
    int a;
    int b;
    
    float nstu[100];
    int otr;
    
    int index;
    int rr;
    float GPA[100];
    
    double Amount;
    double Amount1;
    
    
    Finalgrade * finalgrade = new Finalgrade ();
    Math mat(a,b);
    English eng (a, b);
    
    cout << "How many students for review ";
    cin >>Amount;
    cout<<endl;
    
    for(int i=1;i<=Amount;i++)
    {
        cout << "Please enter the students Math scores: " << "\n";
        finalgrade = &mat;
        
        cout << "Students Math Grade 2021" << " " << mat.LGrade () << "%" << "\n";
        cout << "\n";
    }
    
    cout << "How Many students for review ";
    cin >>Amount1;
    cout<<endl;
    
    
    for(int i=1;i<=Amount1;i++)
    {
        cout << "Please enter the students English scores: " << "\n";
        finalgrade = &eng;
        cout << "Students English grade 2021" << " " << eng.LGrade () << "%" << "\n";
    }
    
    finalgrade->AskForHon_roll(); //Call virtual function
    finalgrade->LGrade(); //Call for LGrade function from the parent class
                        //Implementation of overridng
    
    return 0;
};



