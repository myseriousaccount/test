#include <iostream>
#include <sum.h>
#include <diff.h>
#include <prod.h>
#include <print.h>
using namespace std;
main ()
{
    int a = 10;
    int b = 12;
    int sum = sum(a, b);
    int diff = diff(a, b);
    int prod = prod(a, b);
    print(a, b);
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Production: " << prod << endl;
    
}
