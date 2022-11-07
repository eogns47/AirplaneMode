#ifndef SIGN_IN_H
#define SIGN_IN_H

#include "string_function.h"
#include <direct.h>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool make_new_user(vector<string> new_user_data, string user_ID);
bool sign_in_prompt(string user_ID);

#endif