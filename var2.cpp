#include <cmath>
#include <iostream>

class Calculator{
    private: 
        double a;
        char oper;
        double b;

    public:
    int Calculate()
        {
            double result;
            switch(oper)
            {
                case '+':
                    result = a + b;
                    break;
                
                case '-':
                    result = a - b;
                    break;
                
                case '*':
                    result = a * b;
                    break;
                
                case '/':
                    if (b == 0){
                        std::cout << "math error";
                        return 0;
                    }
                    else{
                        result = a / b;
                        break; 
                    }
                
                case '^':
                    result = pow(a, b);
                    break;
                
                case 'c':
                    return 0;

                default:
                    std::cout << "error";
                    return 0;
            }
            a = result;
            return 1;
        }
        
        void set_a()
        {
            a = 0.0;
        }

        void get_a()
        {
            std::cout <<"Current result: "<< a << "\n";
        }

        void set_oper()
        {
            std::cout << "Input operator: ";
            std::cin >> oper;
        }

        void set_b()
        {   
            std::cout << "Input value: ";
            std::cin >> b;
        }
        
};

int main(){
    Calculator call;
    call.set_a();
    std::cout << "Starting value: 0 \n" ; 
    while(true){
        call.set_oper();
        call.set_b();
        if (call.Calculate() == 0) break;
        call.get_a();
    }
}