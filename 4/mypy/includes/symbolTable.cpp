#include <map>
#include <algorithm>
#include "symbolTable.h"
#include "literal.h"

SymbolTable& SymbolTable::getInstance() {
  static SymbolTable instance;
  return instance;
}

const Literal* SymbolTable::getValue(const std::string& name) const {
  //std::cout<<name<<std::endl;
  std::map<std::string, const Literal*>::const_iterator it = 
    table.find(name);
  if ( it == table.end() ) throw name+std::string(" not found");
  return it->second;
}

void SymbolTable::setValue(const std::string& name, const Literal* val) { 
  table[name]=val;
  //std::pair<std::string, const Literal*> temp(name, val);
  //std::cout<<"Ident has been inserted";
  //val->print();
  //table.insert(temp);
  //std::cout<<"after inter";
  //(SymbolTable::getInstance().getValue(name))->print();
}

