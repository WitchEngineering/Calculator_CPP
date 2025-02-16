#include <iostream> 
#include <cmath> 
#include <string> 

using namespace std; 

// Tarea: I need, Distance, Pitagoras, Area, Volume, etc

class MathCpp { 
    private: 
    // Initial numbers: 
    double num_1;
    double num_2;

    // Aditional numbers: 
    double num_3; 
    double num_4; 

    double add_num; // The sum of numbers (n)
    double subtrac_num; // The substraction of numbers (n)
    double mult_num; // The multiplication of numbers (n)
    double div_num; // The division of numbers (n)
    

    // Addiding Advace Options: 
    double area_trig; 
    double distance_form;
    double pitagoras;
    double volume; // must add more volume formulas. 

    bool completed; // If task is completed then true else false. 

public: 
// Constructor default 
MathCpp() { 
}

// PArametrizado: 
MathCpp(double num_1, double num_2) { 
this-> num_1 = num_1; 
this-> num_2 = num_2; 
}

// Inputs:

//  It allows you to modify the original number directly without making a copy of it.

// getter for sum of number:
double getAddNumber() { return add_num;}
// Getter for subtraction:
double getSubtracNum() { return subtrac_num;}
// Getter for mult:
double getMutltNum() { return mult_num; }
// Getter for div: 
double getDivNum() { return div_num;}

// Getters fro Input: 
long double getNum1(){ return num_1;}
long double getNum2(){ return num_2;}

// Getter for math completion: 

bool is_Completed() const { return completed; } 

// Setters --------------- > 

void setAddNumber(double add_num) {add_num = add_num;}
void setSubtracNum(double subtrac_num) { subtrac_num = subtrac_num;}
void setMultNum(double mult_num) { mult_num = mult_num;}
void setDivNum(double div_num) {div_num = div_num;}

// Setters for input ------>
void setNum1(double num_1) { num_1 = num_1;}
void setNum2(double num_2) { num_2 = num_2;}

// Functionality (Basic):

// Adding two numbers together 
void addNumber(long double number_1, long double number_2) { 
    double add_result = (number_1 + number_2);  
    cout << "Result: " << add_result << endl; 
    }

    // Subtract two numbers together
    
    void subtracNum(long double number_1, long double number_2) { 
    double sub_result = (number_1 - number_2);
    cout << "Result: " << sub_result << endl; 
    }
    // Multiply two numbers together
    void multNum(long double number_1, long double number_2) { 
    double mult_result = (number_1 * number_2);
    cout << "Result: " << mult_result << endl; 
    }
    
    // Divide two numbers together
    void divNum (long double number_1, long double number_2) { 
    double div_result = (number_1 / number_2);
    cout << "Result: " << div_result << endl; 
    }
    
    // Advace Options functionality :

    void Distance() { 
        // Num_1 = X2, Num_2 = X1, Num_3 = Y2, Num_4 = Y1. 

        // Temp Numbers: 
        // sum_1 and sum_2.

        // How it works: 
        // 1) It substacts the inputs
        // 2) It then powers them to the second power
        // 3) It solves the distance equation.

        double sum_1 = (num_1 - num_2); 
        double sum_2 = (num_3 - num_4); 
        double pow_1 = pow(sum_1,2);
        double pow_2 = pow(sum_2,2);
        double distance = sqrt(pow_1 + pow_2);
        cout << "Distance = " << distance << endl;

    }
    
    void AreaUniversal() {

        int area_menu;
        cin >> area_menu;
        cout << "Which Area you want to Work with?" << endl; 
        cout << "1. Square" << endl; 
        cout << "2. Triangle"<< endl; 
        cout << "3. Circle" << endl; 
        cout << "4. Rectangle" << endl; 
        cout << "5. Go Back" << "\n\n"; 

        cout << "Chose your answer: " << area_menu << endl; 
    } 








    // Go Back Menu: 
    void GoBackMeenu() { 

        cout << "Your are Exiting Area Tab (Stay in Area = 0), (Leave to Advace Options = 1)" << endl; 
        int GoBack;
        cin >> GoBack;
        if (GoBack == 1) { 
            cout << "Exiting Tab"; 
            advaceOptionsDips();
        } else if(GoBack == 0) { 
            AreaUniversal(); 
        }
    }

// Display Options

void calculator_on_screen() { 
   
    cout << "--------------- Menu ----------------\n\n";
    cout << "1. Add Numbers\n"; 
    cout << "2. Subtratc numbers\n"; 
    cout << "3. Multiply numbers\n";
    cout << "4. Divide numbers\n";
    cout << "5. Exit\n";
    cout << "6. Advace Options\n";
}    

// Select Screen (Basic)
void selectLogic() {
    int selected;
    cin >> selected;
    switch(selected){
        case 1:
            userInput();
            addNumber(getNum1(), getNum2());
            break;
    
        case 2:
            userInput();
            subtracNum(getNum1(), getNum2());
            break;
    
        case 3:
            userInput();
            multNum(getNum1(), getNum2());
            break;
    
        case 4:
            userInput();
            divNum(getNum1(), getNum2());
            break;
    
        case 5:
        user_start_Exit(); 
            break;
            
        case 6: 
        advaceOptionsDips(); 
        break;
    
        default: 
            calculator_on_screen();
            break;
    }
    
    }

// Advance Calc Options: 

void advaceOptionsDips() { 

cout << "Welcome to Advace Options :D" << endl; 
cout << "What would you like to do?" << endl; 

cout << "1. Calc Distance" << endl; 
cout << "2. Calc Area" << endl; 
cout << "3. Calc Volume" << endl; 
cout << "4. Calc Pitagoras" << endl; 
cout << "5. Exit." << endl; 

// Switch Satement: 
int selection_1;
cin >> selection_1;
switch(selection_1) { 
case 1: 
    userInput2();
    Distance(); 
    break; 
    case 2: 
    AreaUniversal(); 
    break;
    case 3: 
    userInput2();
    
    case 4: 
    userInput2();
    break;
    case 5: 
    user_start_Exit(); 
    break; 
    default: 
    calculator_on_screen();
    break;
}

}

// Checks if you typed exit. 
void user_start_Exit() { 
    char user_answer;
    cout << "Do you want to exit the program? \n"; 
    cout << "(Y or N) ";
    cin >> user_answer; 
    if (user_answer == 'Y' || user_answer == 'y') { 
    cout << "Ok then. Have a Good Day Sir/Madam" << endl; 
    }  else if (user_answer == 'N'|| user_answer == 'n')  { 
        calculator_on_screen(); 
    }
}

// User Input (Basic)
void userInput() {
cout << "Type the numbers you want to do magic with: " << endl; 
cin >> num_1;
cin >> num_2;
} 

// User Input (Advace)
void userInput2() { 
        cout << "Type the numbers you want to do magic with: " << endl; 
        cin >> num_1;
        cin >> num_2;
        cin >> num_3;
        cin >> num_4;
}


};

int main() 
{

MathCpp disp; 
disp.calculator_on_screen();
disp.selectLogic(); 
 
return 0; 
}
