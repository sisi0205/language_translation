#include <iostream>
#include <string>
#include "includes/symbolTable.h"
#include "includes/poolOfNodes.h"

extern int yyparse();

int main() {
  /*try {
    if ( yyparse() == 0 ) {
      std::cout << "Program syntactically correct" << std::endl;
      //
    }
  }
  catch ( const std::string& msg ) {
    std::cout << "oops: " << msg << std::endl;
  }*/
    std::cout<<"success"<<std::endl;
    //PoolOfNodes::getInstance().drainThePool();
}
