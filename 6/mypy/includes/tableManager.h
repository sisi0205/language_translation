#ifndef TABLEMANAGER__H
#define TABLEMANAGER__H

#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include "symbolTable.h"
#include "functionTable.h"


class Literal;


class TableManager {
public:
  static   TableManager& getInstance();
  const Literal* getEntry(const std::string & name); //get from symbol table
  const Node* getSuite(const std::string & name);  //get from func table
  const Node* getParameter(const std::string & name); //get form argument table
  void  insert(const std::string& name, const Literal* node);
  void  insert(const std::string& name, const Node* node);
  void  insertargs(const std::string& name, const Node* node);
  bool  checkName(const std::string& name) const;
  bool  checkCurrentName(const std::string& name) const;
  bool  checkFunc(const std::string& name) const;
  int   checkFucScope(const std::string& name) const;
  //int  getScopoe(const std::string& name) const;




  void  pushScope(const std::string& name);
  void  popScope();
  void  display() const;


  ~TableManager() {}
private:
  int currentScope;
  std::vector<SymbolTable > tables;
  std::vector<FunctionTable> functions;
  std::vector<FunctionTable> parameters;

  TableManager() :currentScope(0), tables(),functions(),parameters() {
    tables.push_back(SymbolTable());
    functions.push_back(FunctionTable());
    parameters.push_back(FunctionTable());
  }
};




#endif