/* Text sample identifier based on a sample searched through the text
example:  My name is bond . --- my find command search for the  " ." sample, if its contained inside the text lenght it return a message
/*/

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main()
{

    string text = " ";
    string Full_text = " ";


    while (true)
    {
        getline(cin, text);

        if (text.find(" .") < text.length()) cout << "O.K\n";
        else cout << "NAO O.K\n";
    }
   
    return 0;
}





