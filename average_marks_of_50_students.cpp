#include <iostream>
using namespace std;

int main()
{
    int n, i;
    float num[50], sum=0.0, average;

    cout << "Enter the numbers of student: ";
    cin >> n;

    for(i = 0; i < n; ++i)
    {
        cout << i + 1 << ". Enter marks of student "<< i + 1 <<": ";
        cin >> num[i];
        sum += num[i];
    }

    average = sum / n;
    cout << "Average marks of students = " << average;

    return 0;
}
