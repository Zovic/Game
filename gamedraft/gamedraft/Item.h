#pragma once

#include <string>

using namespace std;


class Item
{
public:
  Item(string new_name="\0");
  ~Item();

private:
  string name;
};
