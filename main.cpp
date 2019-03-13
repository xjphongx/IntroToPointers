/*

    In Class Practice regarding pointers

*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    // 1) Declare 2 int pointers variables
    int *intPtr1;
    int *intPtr2;

    // 2) Make a <new int> variable pointed to the first pointers above
    intPtr1 = new int;

    // 3) Assign the value of 42 to the variable created above
    *intPtr1 = 42;

    // 4) Set the 2nd ptr to point to the new variable in step 2
    //      cout the values of all pointers
    intPtr2 = intPtr1;  //"intPtr2 will now point to whatever intPtr1 is pointing at"   
    cout << "pointer 1: "<< *intPtr1 << endl;
    cout << "pointer 2: "<< *intPtr2 << endl;   //both values will have 42

    // 5) Assign the value 53 to 2nd ptr and cout; what is the change?
    *intPtr2 = 53;
    cout << "\npointer 1: "<< *intPtr1 << endl;
    cout << "pointer 2: "<< *intPtr2 << endl;
    /*
        Response: both pointers will now point to 53
    */

    // 6) Need another new int variable pointed to point to intPtr1
    intPtr1 = new int;

    // 7) Set the previous new int variable to 88 and cout
    *intPtr1 = 88;
    cout << "\npointer 1: "<< *intPtr1 << endl;
    cout << "pointer 2: "<< *intPtr2 << endl;
    /*
        Only the 2nd pointer changes while intPtr1 outputs 53
    */

    // 8) clean up 
    delete intPtr1;
    delete intPtr2;
    intPtr1 = NULL;
    intPtr2 = NULL;

    /*
        Class notes: pointer array
        int * a =NULL:
        int n;
        fileln >> n;
        a = new int[n];
        for (int i =0; i <n ; i++)
        {
            a[i] = 0;
        }
        delete []a; //free up space in array
        a = NULL;

    */

    system ("read -p 'Press Enter to Continue...' var" );
    return 0;
}