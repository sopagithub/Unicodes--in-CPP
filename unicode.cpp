/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <vector>
#include <ctime>
using namespace std;

int getRandomNum(int lower, int upper,
                             int count)
{   int num;
    int i;
    srand(time(0));
    for (i = 0; i < count; i++) {
        num = (rand() % (upper - lower + 1)) + lower;
    }
    return num;
}

int main()
{
    vector<string> ucicons;
    ucicons.push_back("\U0001F332");
    ucicons.push_back("\U0001F334");
    ucicons.push_back("\U0001F333");
    ucicons.push_back("\u2F4A");
    ucicons.push_back("\U0001F38B");
 

    std::cout << '\n' << ' ';   
    for (int i = 0; i < ucicons.size(); i++){
        vector<int> vec;
        vector<string> temp;
        for (int j = 0; j < ucicons.size(); j++) {
            int randomNum = getRandomNum(0, 4, 2);
            if(j == 0) {
                vec.push_back(randomNum);
                temp.push_back(ucicons.at(randomNum));
            } else {
                
                while (std::find(vec.begin(), vec.end(), randomNum) != vec.end())
                {
                        randomNum = getRandomNum(0, 4, 1);
                }
                temp.push_back(ucicons.at(randomNum));
                vec.push_back(randomNum);
                //cout << ucicons.at( j ) << "\n";
            }
        }
        
         for(int i=0; i<temp.size(); ++i)
               std::cout << temp[i];
        
        std::cout << '\n' << ' ';        	
    }


    return 0;
}
