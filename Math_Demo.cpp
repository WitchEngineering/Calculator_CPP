#include <iostream> 
#include <cmath> 
#include <string> 
#include <vector> 

using namespace std; 

// Tarea: I need, Distance, Pitagoras, Area, Volume, etc

class simple_math { 
    
    double add_num; // The sum of numbers (n)
    double subtrac_num; // The substraction of numbers (n)
    double mult_num; // The multiplication of numbers (n)
    double div_num; // The division of numbers (n)
    bool completed; // If task is completed then true else false. 

public: 
// Constructor to initialize a task. 


// double& means a reference to a double object. It allows you to modify the original number directly without making a copy of it.


// getter for sum of number:
double get_add_number() { return add_num;
}

// Getter for subtraction:
double get_subtrac_num() { return subtrac_num;
}

// Getter for mult:
double get_mutlt_num() { return mult_num; 
}

// Getter for div: 
double get_div_num() { return div_num;
}
//----------------


// Getter for math completion: 

bool is_Completed() const { 
    return completed; } 

}; 

class simple_math_menu { 
    private:
        vector <simple_math> simple; // Creates a list of tasks 

    public:

    long double num_1; 
    long double num_2;

    long double get_num_1(){
    return num_1;
}

long double get_num_2(){
    return num_2;
}
// Setters --------------- 

void set_num_1(long double temp1){
    num_1 = temp1;
}

void set_num_2(long double temp2){
num_2 = temp2;
}

void calculator_on_screen() { 
cout << "--------------------------------------" << endl; 
cout << "-- Do you want to start doing math? --" << endl; 
cout << "-- if so select which task To-Do ----" << endl;             
cout << "-------------------------------------" << endl; 
cout << "--------------- Menu ----------------\n\n";
cout << "1. Add Numbers\n"; 
cout << "2. Subtratc numbers\n"; 
cout << "3. Multiply numbers\n";
cout << "4. Divide numbers\n";
cout << "5. Exit\n\n";
cout << "------------------------------------\n\n";

// Here I can add other Options to do more specific stuff. 

// Adding Functionality
int selected;
cin >> selected;
switch(selected){
    case 1:
        user_input_num();
        add_number(get_num_1(), get_num_2());
        break;

    case 2:
        user_input_num();
        subtrac_num(get_num_1(), get_num_2());
        break;

    case 3:
        user_input_num();
        mult_num(get_num_1(), get_num_2());
        break;

    case 4:
        user_input_num();
        div_num(get_num_1(), get_num_2());
        break;

    case 5:
        user_start_Exit(); 
        break;

    default: 
        calculator_on_screen();
        break;
}

}

// Adding two numbers together 
void add_number(long double number_1, long double number_2) { 
double add_result = (number_1 + number_2);  
cout << "Result: " << add_result << endl; 

}

// Subtract two numbers together

void subtrac_num(long double number_1, long double number_2) { 
double sub_result = (number_1 - number_2);
cout << "Result: " << sub_result << endl; 

}
// Multiply two numbers together
void mult_num(long double number_1, long double number_2) { 
double mult_result = (number_1 * number_2);
cout << "Result: " << mult_result << endl; 

}

// Divide two numbers together
void div_num (long double number_1, long double number_2) { 
double div_result = (number_1 / number_2);
cout << "Result: " << div_result << endl; 
}

// Checks if the user wants to do math or not.
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

// Uses the user input to add, sum, div or mult a number. 
void user_input_num() 
{ 
    cout << "Type the numbers you want to do magic with: " << endl; 
    long double temp1;
    long double temp2;
    cin >> temp1;
    cin >> temp2;
    set_num_1(temp1);
    set_num_2(temp2);
}


};


int main() 
{
simple_math_menu hodo; // Error Aqui. 
hodo.calculator_on_screen(); 
return 0; 
}
