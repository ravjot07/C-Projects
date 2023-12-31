#include <iostream>
#include <cmath>

using namespace std;

void arithmetic();
void trigonometric();
void exponential();
void logarithmic(); 

int main () {
    int sel = 0;

    cout <<" ADVANCED CALCLUCATOR\n";
    cout << "Enter the type of the operation you want to calculate\n";
    cout << "[1] Arithmetic\n";
    cout << "[2] Trigonometric\n";
    cout << "[3] Exponential \n";
    cout << "[4] Logarithmic\n";
    cout << "Your Choice: ";

    cin >> sel;

    switch (sel)
    {
    case 1:
        arithmetic ();
        break;
    
    case 2:
        trigonometric();
        break;
    
    case 3:
        exponential();
        break;
    
    case 4:
        logarithmic();
        break;
    
    default:
        cout << "invalid Operation";
        break;
        
    }

   return 0;

}

 void arithmetic (){
        int op = 0;
        float A = 0;
        float B = 0;

        cout << "Select operation\n";
        cout << "[1] Addition\n";
        cout << "[2] Substraction\n";
        cout << "[3] Product \n";
        cout << "[4] Division \n";

        cin >> op;
        cout << "Enter the first number";
        cin >> A;
        cout << "Enter the second number";
        cin >> B;

        cout << "Result:";

        switch (op)
        {
        case 1:
            cout << (A+B);
            break;
    
        case 2:
            cout << (A-B);
            break;

        case 3:
            cout << (A*B);
            break;

        case 4:
            cout << (A/B);
            break;    
    
        default:
            cout << "invalid Operation";
            break;
        
    }
    cout << endl;
        
    }

    void trigonometric(){
        int op = 0;
        float val = 0.0;
        
        cout << "select\n";
        cout << "[1] sine\n";
        cout <<"[2] cosine\n";
        cout << "Op:";
        cin >> op;
        cout << "value";
        cin >> val;

        if (op == 1)
        {
            cout << sin(val);
        }
        else if (op == 2)
        {
            cout << cos(val);
        }
        else{
            cout << "invlaid operation";
        }
        cout << endl;
    };

    void exponential (){
        float base = 0.0;
        float expo = 0.0;

        cout << "enter the value of base";
        cin >> base;

        cout << "enter the value of exponent";
        cin >> expo;

        cout << pow(base,expo)<< endl;        
    }

    void logarithmic (){
        float value = 0.0;
        cout << "enter the vlaue";
        cin >> value;

        cout << log(value) << endl;
    }