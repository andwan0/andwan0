
#include <bits/stdc++.h>
using namespace std;

int main() {
multimap<int, int> multp;
multp.insert(pair <int, int> (1, 40)); 
multp.insert(pair <int, int> (2, 30)); 
multp.insert(pair <int, int> (3, 60)); 
multp.insert(pair <int, int> (4, 20)); 
multp.insert(pair <int, int> (5, 50)); 
multp.insert(pair <int, int> (6, 50));  
multp.insert(pair <int, int> (6, 10)); 
  
multimap<int, int> :: iterator itr;
    
for(itr = multp.begin(); itr != multp.end(); itr++)
   cout << itr->first << "-" << itr->second << endl;
system("pause");
	return 0;


}
