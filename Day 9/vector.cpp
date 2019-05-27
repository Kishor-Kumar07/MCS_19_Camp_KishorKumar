#include <iostream> 
#include <vector> 
using namespace std; 
int main() 
{ 
    vector<int> g1; 
    for (int i = 1; i <= 5; i++) 
        g1.push_back(i); 
    cout << "Output of begin and end: "; 
    for (auto i = g1.begin(); i != g1.end(); ++i) 
        cout << *i << " "; 
    cout << "\nOutput of cbegin and cend: "; 
    for (auto i = g1.cbegin(); i != g1.cend(); ++i) 
        cout << *i << " "; 
    cout << "\nOutput of rbegin and rend: "; 
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir) 
        cout << *ir << " "; 
    cout << "\nOutput of crbegin and crend : "; 
    for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir) 
        cout << *ir << " "; 
         cout << "\nReference operator [g] : g1[2] = " << g1[2]; 
    cout << "\nat : g1.at(4) = " << g1.at(4); 
    cout << "\nfront() : g1.front() = " << g1.front(); 
    cout << "\nback() : g1.back() = " << g1.back(); 
    int* pos = g1.data(); 
    cout << "\nThe first element is " << *pos;
     vector<int> v; 
    v.assign(5, 10); 
    cout << "The vector elements are: "; 
    for (int i = 0; i < v.size(); i++) 
        cout << v[i] << " ";
    v.push_back(15); 
    int n = v.size(); 
    cout << "\nThe last element is: " << v[n - 1]; 
    v.pop_back(); 
    cout << "\nThe vector elements are: "; 
    for (int i = 0; i < v.size(); i++) 
        cout << v[i] << " "; 
    v.insert(v.begin(), 5); 
    cout << "\nThe first element is: " << v[0]; 
    v.erase(v.begin()); 
    cout << "\nThe first element is: " << v[0]; 
    v.emplace(v.begin(), 5); 
    cout << "\nThe first element is: " << v[0]; 
    v.emplace_back(20); 
    n = v.size(); 
    cout << "\nThe last element is: " << v[n - 1]; 
    v.clear(); 
    cout << "\nVector size after erase(): " << v.size(); 
    vector<int> v1, v2; 
    v1.push_back(1); 
    v1.push_back(2); 
    v2.push_back(3); 
    v2.push_back(4); 
    cout << "\n\nVector 1: "; 
    for (int i = 0; i < v1.size(); i++) 
        cout << v1[i] << " "; 
    cout << "\nVector 2: "; 
    for (int i = 0; i < v2.size(); i++) 
        cout << v2[i] << " "; 
    v1.swap(v2); 
    cout << "\nAfter Swap \nVector 1: "; 
    for (int i = 0; i < v1.size(); i++) 
        cout << v1[i] << " "; 
    cout << "\nVector 2: "; 
    for (int i = 0; i < v2.size(); i++) 
        cout << v2[i] << " "; 
         vector<int> g; 
    for (int i = 1; i <= 5; i++) 
        g.push_back(i); 
    cout << "Size : " << g.size(); 
    cout << "\nCapacity : " << g.capacity(); 
    cout << "\nMax_Size : " << g.max_size(); 
    g.resize(4); 
    cout << "\nSize : " << g.size(); 
    if (g.empty() == false) 
        cout << "\nVector is not empty"; 
    else
        cout << "\nVector is empty"; 
    g.shrink_to_fit(); 
    cout << "\nVector elements are: "; 
    for (auto it = g.begin(); it != g.end(); it++) 
        cout << *it << " "; 
    return 0; 
} 

       
  
   
    
    
    
   
