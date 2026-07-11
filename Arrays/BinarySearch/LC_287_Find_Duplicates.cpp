#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 2, 4, 9};
    int n = arr.size();
    
    int j = 0;
    
    int low = 0;
        int high = arr.size() - 1;

        while(low < high)
        {
            int mid = (low + high) / 2;
            int count = 0;

            for(int i : arr)
            {
                if(i <= mid)
                {
                    count++;
                }
            }

            if(count > mid)
            {
                high = mid;
            }
            else
            {
                low = mid + 1;
            }
        }
        cout << low;
}
