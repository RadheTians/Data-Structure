#include <iostream>    
using namespace std;    
struct Rectangle {   
    private:  
    int width;
    int height;      
      
 };      
int main(void) {    
    struct Rectangle rec;    
    rec.width=8;    
    rec.height=5;    
   cout<<"Area of Rectangle is: "<<(rec.width * rec.height)<<endl;    
 return 0;    
}    