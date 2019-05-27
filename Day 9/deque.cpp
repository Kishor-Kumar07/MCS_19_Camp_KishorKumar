#include <iostream> 
#include <deque> 
using namespace std; 
void showdq(deque <int> g) 
{ 
    deque <int> :: iterator i; 
    for (i = g.begin(); i != g.end(); ++i) 
        cout << '\t' << *i; 
    cout << '\n'; 
}
int main() 
{ 
    deque <int> gq; 
    gq.push_back(10); 
    gq.push_front(20); 
    gq.push_back(30); 
    gq.push_front(15); 
    cout << "The deque gq is : "; 
    showdq(gq); 
    cout << "\ngq.size() : " << gq.size(); 
    cout << "\ngq.max_size() : " << gq.max_size(); 
    cout << "\ngq.at(2) : " << gq.at(2); 
    cout << "\ngq.front() : " << gq.front(); 
    cout << "\ngq.back() : " << gq.back(); 
    cout << "\ngq.pop_front() : "; 
    gq.pop_front(); 
    showdq(gq); 
    cout << "\ngq.pop_back() : "; 
    gq.pop_back(); 
    showdq(gq); 
    return 0; 
}
