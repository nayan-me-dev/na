#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

int compute_min_refills(int dist, int tank, vector<int> & stops) {
    int current_refill=0,last_refill=0;
    int n=stops.size();
    int num_refill=0;
    if(tank>=dist)
    {
    	return 0;
	}
    else
	{
	while (current_refill < n && tank<=dist) {
        last_refill = current_refill; 
        while ( ( current_refill < n ) && ( (stops[current_refill + 1] - stops[last_refill]) <= tank ) )
        {
            current_refill = current_refill + 1;
        }
        
	      if (current_refill == last_refill)
        {
            return -1;
        }
        
        if ((stops[current_refill] + tank) >= dist)
        {
            return current_refill;
        }
    }
    return -1;
}
}


int main() {
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n);
    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}
