#include <iostream>
using namespace std;

// int main(){
//     int age; //garbafe value
//     cout<<"Enter your age : ";
//     cin>>age;
//     cout<<"Hey your age is = "<<age << endl;
//     return 0;
// }

//switch statement
/* int main(){
    int day = 3;
    switch(day){
        case 1 : cout << "Monday" << endl;
                break;
        case 2 : cout << "Tuesday" << endl;
                break;
        case 3 : cout << "Wednesday" << endl;
                break;
        case 4 : cout << "Thursday" << endl;
                break;
        default :  cout << "Invalid day" << endl;
    }
    return 0;
} */

//calculator

int main () {
    int a;
    cout << "Enter a : ";
    cin >> a;
    
    int b;
    cout << "Enter b : ";
    cin >> b;

    char operators;
    cout << "Enter operator which have done operation : ";
    cin >> operators;
    int randomCharacter = int(operators);
    
    // cout << randomCharacter;
 
    switch (randomCharacter)
    {
    case 42:
        cout <<"multiplication of a & b : " << a*b;
        break;
    
    case 43:
        cout <<"addition of a & b : " << a+b;
        break;
    
    case 45:
        cout <<"substraction of a & b : " << a-b;
        break;
    
    case 47:
        cout <<"division of a & b : " << a/b;
        break;
    
    default:
        cout << "Invalid operator";
        break;
    }

    return 0;

}