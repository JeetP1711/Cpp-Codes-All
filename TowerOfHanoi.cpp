#include <iostream>
using namespace std;
void towerOfHanoi(int n, char source, char auxiliary, char destination) // n is the no of disk,source is intial point ,auxiliary is mid and destination is terminal
{
    if (n == 1)
    {
        cout << "Move disk 1 from rod " << source << " to rod " << destination << endl;
        return;
    }
    towerOfHanoi(n - 1, source, destination, auxiliary); // n-1 is use to define the consecutive step means ek step ocho thai che e define kare che its not subtraction
    cout << "Move disk " << n << " from rod " << source << " to rod " << destination << endl;
    towerOfHanoi(n - 1, auxiliary, source, destination); // for repetion
}
int main()
{
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;
    cout << "Steps to solve Tower of Hanoi problem with " << n << " disks:" << endl;
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}