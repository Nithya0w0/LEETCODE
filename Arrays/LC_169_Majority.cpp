#include<iostream> 
#include<vector>
using namespace std;

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int n = arr.size();

    int count = 0;
    int can = 0;

    for(int i : arr)
    {
        if(count == 0)
        {
            can = i;
            count = 1;
        }
        else if(i == can)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    cout << can;
}