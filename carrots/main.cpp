//
//  main.cpp
//  carrots
//
//  Created by sunhongyin on 16/3/6.
//  Copyright © 2016年 sunhongyin. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    using namespace std;
    
    int carrots;
    
    carrots = 25;
    cout << "I have ";
    cout << carrots;
    cout << " carrots.";
    cout << endl;
    
    carrots = carrots - 1;
    cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
    
    return 0;
}
