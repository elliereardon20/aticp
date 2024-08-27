#include <iostream>
#include <vector>

using namespace std;

int main(int agrc, char const *argv[]){
    //argc is the number of strings given to this program
    //argv is the array of strings
    cout<<"Hello, World!"<<endl;
    //This is a comment
    /*
    this is a multiline comment
    */
    int x = 3;
    cout<<"The number x is "<<x<<endl;
    int y = 0;
    cout<<"Please enter a number of y: ";
    cin>>y;
    cout<<"The number y is "<<y<<endl;
    /*
    Data types in C++ are:
        int, float, double, bool, and char
    */
    int a = 5;
    cout<<"The value of a is "<<a<<endl;

    //you can convert a double to an int without casting
    double b = 5.3
    int c = b;
    cout<<"b is: "<<b<<end1<<"c is "<<c<<end1;

    string name = "Ellie Reardon"; //strings start with lowercase unlike java
    cout<<"My name is "<<name<<end1;
    //strings work as you think they do. You can look up the functions for them when it matters.

    //We have arguments. Don't worry about the syntax, but know this is how you use it.
    cout<<"You gave "<<argc<<" arguments and they are:"<<end1;
    for(int i = 0; i<argc; i++){
        cout<<argv[i]<<end1;
    }
    //Most of the time you will take command line arguments instead of cin
    //the thing above is an array. never use arrays, you should use vectors instead
    //here's why:
    int daArray[] = {2,4,6,8};
    cout<<"Number at position 2 is "<<daArray[2]<<end1;
    //you are allowed to go past the array's bounds. very dangerous!
    //C++ does not do error checking, nor can you check for the size
    //when you make an array, C++ allocates that amount of memory. End of story.

    //Vectors are like ArrayList
    vector<int> foo; //vector called foo
    foo.push_back(53); //Adds the number 53
    foo.push_back(5);
    foo.push_back(7);
    cout<<foo[0]<<end1; //Access like a vector
    cout<<foo.side()<<end1; //gets the size of the vector
    foo.pop_back(); //Gets rid of the last item
    foo[0]=2; //changes the value at position 0 to 2
    foo.erase(foo.begin()+1); //removes the element at position 1
    for(int i=0; i<foo.size(); i++){
        cout<<foo[i]<<end1;
    }
    //ou get a warning if you don't use an unsigned int because you are wasting memory
    //the size can't be negative so why even have it as an option?
    return 0;
}