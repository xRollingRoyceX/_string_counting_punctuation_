/* Author: sean,+
 * Read 'till you can't. Then write it 'till
 * you can. this is a language, and i will make many mistakes :)
 * It's a language and I will make many mistakes, -
 * it's natural to get flustered and want to quit C++ forever - 
 * Created on November 26, 2017, 6:23 AM
 */
#include "inclds"
//what do i want to return....??
//make a project -...

const string::size_type string_size(string::size_type val, const string &s) 
{    
    for (auto &i : s)
    {
        if (ispunct(i)) 
        {
            ++val;
        }
    }
    return val;
}
int main() 
{
    const string::size_type str = 0;
    string s{"this is a string with my name s* * *!?!?"};

    cout << string_size(str, s);
    return 0;
}

