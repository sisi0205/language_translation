

#include <map>
#include <algorithm>
#include "tableManager.h"
#include "symbolTable.h"
#include "functionTable.h"
#include "literal.h"




TableManager& TableManager::getInstance()
{
	static TableManager instance;
	return instance;
}

const Literal* TableManager::getEntry(const std::string & name)
{
  std::vector<SymbolTable>::const_reverse_iterator rit=tables.rbegin();

  for ( ; rit!=tables.rend(); ++rit)
   {
   	if(rit->found(name)) 
   	{
   		
   		tables[currentScope].insert(name,rit->getEntry(name));
   	    return rit->getEntry(name);

   	}
   		
   		
   }
   if ( rit == tables.rend() ) throw name+std::string(" entry not found");
   		
   return 0; 

} //get from symbol table

const Node* TableManager::getSuite(const std::string & name)
{
	std::vector<FunctionTable>::const_reverse_iterator it;
	
   for(it=functions.rbegin(); it!=functions.rend(); it++)
   {
   	if(it->found(name)) return it->getEntry(name);
   }
   if(it==functions.rend()) throw name+std::string(" functon not found");
   return 0;


}  //get from func table


const Node* TableManager::getParameter(const std::string & name) 
{
   std::vector<FunctionTable>::const_reverse_iterator it;
   
   for(it=parameters.rbegin(); it!=parameters.rend(); it++)
   {
      if(it->found(name)) return it->getEntry(name);
   }
   if(it==parameters.rend()) throw name+std::string(" argument not found");
   return 0;

}

void  TableManager::insert(const std::string& name, const Literal* node)
{

	tables[currentScope].insert(name,node);
	//std::cout<<"insert "<<name<<std::endl;
}



void  TableManager::insert(const std::string& name, const Node* node)
{
	
	functions[currentScope].insert(name,node);
	//display();
}
void  TableManager::insertargs(const std::string& name, const Node* node)
{
   parameters[currentScope].insert(name,node);
}

bool  TableManager::checkName(const std::string& name) const
{
   std::vector<SymbolTable>::const_reverse_iterator rit=tables.rbegin();
   for(;rit!=tables.rend();rit++)
   	if(rit->found(name)) return true;
   return false;

}


bool  TableManager::checkCurrentName(const std::string& name) const
{
   std::vector<SymbolTable>::const_reverse_iterator rit=tables.rbegin();
   	if(rit->found(name)) return true;
   return false;

}

int  TableManager::checkFucScope(const std::string& name) const
{
   std::vector<FunctionTable>::const_reverse_iterator rit=functions.rbegin();
   int res=functions.size();
   for (; rit!=functions.rend(); ++rit)
   {
   	if(rit->found(name)) 
   		{
   			return res;
   		}
   	else
   		res--;
   	
   }
   if(rit==functions.rend()) throw std::string("Couldn't find the scope");
   return 0;
}


bool  TableManager::checkFunc(const std::string& name) const
{
   std::vector<FunctionTable>::const_reverse_iterator rit=functions.rbegin();
   for(;rit!=functions.rend();rit++)
   	if(rit->found(name)) return true;
   return false;

}

void  TableManager::pushScope(const std::string& name)
{ 
	//call function 
	currentScope++;
	FunctionTable ftb,args;
	SymbolTable stb;
	//std::cout<< " getscope "<<name <<" is "<<checkFucScope(name)<<std::endl;
	if(checkFucScope(name)!=currentScope)
		{
			stb=tables[checkFucScope(name)-1];
		}

	if(checkFunc(name))
	{	
		
		ftb.insert(name, getSuite(name));
      args.insert(name,getParameter(name));
	
	}

	tables.push_back(stb);
	functions.push_back(ftb);
   parameters.push_back(args);
	//std::cout<<"currentScope afterpush "<<currentScope<<std::endl;



}

void  TableManager::popScope()
{
	tables.pop_back();
	functions.pop_back();
   parameters.pop_back();
	currentScope--;
	//std::cout<<"currentScope  afterpop"<<currentScope<<std::endl;
}

void  TableManager::display() const
{
	
	for (std::vector<SymbolTable>::const_iterator it = tables.begin(); it!=tables.end() ; ++it)
	{
		std::cout<<" tables "<<std::endl;
	    it->display();
	}

	for (std::vector<FunctionTable>::const_iterator it = functions.begin(); it!=functions.end() ; ++it)
	{
		std::cout<<" functions "<<std::endl;	
	    it->display();
	}


}