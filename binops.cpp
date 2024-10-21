#include <iostream>
#include <iomanip>

using namespace std;

struct BinOp{
    float opnd1;
    char operation;
    float opnd2;
};

double evaluate(double opnd1, double opnd2, char operator){
    

    switch(operator){
        case '+' : return opnd1 + opnd2;
        case '-' : return opnd1 - opnd2;
        case '*' : return opnd1 * opnd2;
        case '/' : return opnd1 / opnd2;
        default: return 0;
    };

    
};

int main(int, char**){
    std::cout << "Hello, from binops!\n"; 
    int opnd1;
    int opnd2;
    char op;
    const int SIZE = 5;
    BinOp* binops = new BinOp[SIZE] ;// allocate 5 struct objects
    
    for (int i =0; i < SIZE; i++){
    try{
        cout << i+1 << "\nFirst";
        if(!(cin >> opnd1))
        {
            throw invalid_argument ("Nonce");
        }
        cin >> opnd1;
        
        cout << "Enter second";
        cin >> opnd2;
        
        cout << "Operator";
        cin >> op;
        
        cout << "\n";
    } catch(const invalid_argument& e){
        cout << "Error" << e.what() << endl;
        cin.clear();
      //  cin.ignore(numeric_limits<streamsize>::max(),'\n'); CHECK WHAT NEEDS IMPORTING
        i--;
    }


        binops[i].opnd1 = opnd1;
        binops[i].opnd2 = opnd2;
        binops[i].operation = op;

    }

    for (int j=0;j<SIZE;j++){
        cout << binops[j].opnd1 << " " << binops[j].operation << " " << binops[j].opnd2 << " = " << evaluate(binops[j].opnd1, binops[j].opnd2, binops[j].operation)<< endl;
    }
     

    

}
