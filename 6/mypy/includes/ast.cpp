#include <iostream>
#include <typeinfo>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <vector> 
#include "ast.h"
//#include "symbolTable.h"
#include "tableManager.h"



const Literal* IdentNode::eval() const { 
  const Literal* val = TableManager::getInstance().getEntry(ident);
  return val;
}


AsgBinaryNode::AsgBinaryNode(Node* left, Node* right) : 
  BinaryNode(left, right) { 
  //const Literal* res = right->eval();
  //const std::string n = static_cast<IdentNode*>(left)->getIdent();
  //TableManager::getInstance().insert(n, res);

}


const Literal* AsgBinaryNode::eval() const { 
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* res = right->eval();
  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  TableManager::getInstance().insert(n, res);
  //SymbolTable::getInstance().setValue(n, res);
  return res;
}


const std::string AsgBinaryNode::getIdent() const{
  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  return n;
}

const Literal* AddBinaryNode::eval() const { 
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  //return (*x+*y);
  return (*x).operator+(*y);
}

const Literal* SubBinaryNode::eval() const { 
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)-(*y));
}

const Literal* MulBinaryNode::eval() const { 
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)*(*y));
}

const Literal* DivBinaryNode::eval() const { 
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)/(*y));
}



const Literal* PctBinaryNode::eval() const { 
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)%(*y));
}


const Literal* DbStarBinaryNode::eval() const { 
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)^(*y));
}


const Literal* DbSlashBinaryNode::eval() const { 
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return (*x).DbSlash(*y);
}


const Literal* EqEqBinaryNode::eval() const {
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  const Literal* number=(*x==*y);
  return number;
}


const Literal* LessBinaryNode::eval() const {
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  const Literal* number=(*x<*y);
  return number;
}


const Literal* GreaterBinaryNode::eval() const {
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  const Literal* number=(*x>*y);
  return number;
}


const Literal* GreaterEqBinaryNode::eval() const {
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  const Literal* number=(*x>=*y);
  return number;
}

const Literal* LessEqBinaryNode::eval() const {
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  const Literal* number=(*x<=*y);
  return number;
}

const Literal* NotEqBinaryNode::eval() const {
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  const Literal* number=(*x!=*y);
  return number;
}



////////////////Unary Node/////////////////

////functon node//

const Literal* SuiteNode::eval() const {
  TableManager & tm=TableManager::getInstance();
  
  for (const Node * n:stmts)  /// check if it is NULL
  {
    if(!n)
    {
      throw std::string("Null");

    }
    n->eval();
    if(tm.checkCurrentName("__RETURN__"))
    {
      return tm.getEntry("__RETURN__");
    }
  }
  
  return nullptr;
}



void ParameterNode::argeval(Node* node) const {
  std::vector<Node* > arg=dynamic_cast<const ArgNode *> (node)->getArg();
  std::vector<Node* >::const_iterator it=arg.begin();
  std::vector<Node* >::const_iterator pit=parameters.begin();
  //eval();
  //TableManager & tm=TableManager::getInstance();
  for (;pit!=parameters.end();pit++)
  {
      if(it!=arg.end())
      {
      const std::string left=(*pit)->getIdent();
      const Literal* res = (*it)->eval();
      TableManager::getInstance().insert(left, res);
      it++;
      }
      else
        (*pit)->eval();

 

/*
      Node * tp;
      tp=new AsgBinaryNode(*pit,*it);
      PoolOfNodes::getInstance().add(tp);
      tp->eval();
    */  

  }

}



const Literal* ParameterNode::eval() const{
  for (Node* n:parameters)
  {
    const std::string str = static_cast<IdentNode*>(n)->getIdent();
    std::cout<<" parameters "<<str<<std::endl;
  }
  return 0;
}


const Literal* ArgNode::eval() const{
  std::vector<Node* >::const_iterator it=argument.begin();
  for(;it!=argument.end();it++)
  {
    (*it)->eval();
  }
  return 0;
}



void ArgNode::InsertVector(Node* node)
{
  std::vector<Node* > v=dynamic_cast<ArgNode* >(node)->getArg();
  argument.insert(argument.end(),v.begin(),v.end());
}


const Literal* FuncNode::eval() const 
  {
    //std::cout<<"Here should Never show up"<<std::endl;
    TableManager::getInstance().insert(FuncName,suite);
    TableManager::getInstance().insertargs(FuncName,parameter);
    return 0 ;
  }


const Literal* CallNode::eval() const {
  TableManager & tm=TableManager::getInstance();
  if(!tm.checkFunc(ident))
  {
    std::cout<<"Function"<<ident<<" Not Found"<<std::endl;
    std::exception up=std::exception();
    throw up;
  }
  tm.pushScope(ident);

  if(tm.getParameter(ident)) 
  dynamic_cast<const ParameterNode *> (tm.getParameter(ident))->argeval(argument);
  
  const Literal* res=tm.getSuite(ident)->eval();
  
  tm.popScope();
  if(!res) {
    res=new NoneLiteral();
    PoolOfNodes::getInstance().add(res);
  }
  return res;
}




const Literal* PrintNode::eval() const
  {
    if (!node) {
    std::cout<<"none node"<<std::endl;
    return 0;
    }
    node->eval()->print();
    return 0 ;
  }



const Literal* ReturnNode::eval() const{

  if(!node){
    const Literal* res=new NoneLiteral();
    PoolOfNodes::getInstance().add(res);
    TableManager::getInstance().insert(rname, res);
    return 0;
  }
  const Literal* res=node->eval();
  TableManager::getInstance().insert(rname, res);
  return res;
}




const Literal* IfNode::eval() const{
  if(!test){
    return 0;
  }

  bool flag= test->eval()->eval()->getbool();
  if(flag)
  {
    if(!thenSuite) throw std::string("No thenSuite");
    thenSuite->eval();
    
  
  }

  else if(!flag){
    if(!elseSuite) {
      return 0;
    }
    elseSuite->eval();

  }
else throw std::string("Neither true or false");
return 0;

}







