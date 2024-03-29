CCC = clang++
LEX = flex
YACC = bison
CFLAGS = -g -std=c++11 -W -Wall -Weffc++ -Wextra -pedantic -O0
LEXFLAGS = -Wno-unused -Wno-sign-compare -Wno-deprecated-register

OBJS = literal.o ast.o tableManager.o symbolTable.o functionTable.o poolOfNodes.o main.o parse.tab.o lex.yy.o

run: $(OBJS)
	$(CCC) $(CFLAGS) -o run $(OBJS)

main.o: main.cpp
	$(CCC) $(CFLAGS) -c main.cpp

parse.tab.c: includes/parse.y
	$(YACC) -d includes/parse.y

parse.tab.o: parse.tab.c
	$(CCC) $(CFLAGS) -c parse.tab.c

lex.yy.c: includes/scan.l parse.tab.o
	$(LEX) includes/scan.l

lex.yy.o: lex.yy.c
	$(CCC) $(CFLAGS) $(LEXFLAGS) -c lex.yy.c

ast.o: includes/ast.cpp includes/ast.h includes/literal.h 
	$(CCC) $(CFLAGS) -c includes/ast.cpp

tableManager.o: includes/tableManager.cpp includes/tableManager.h 
	$(CCC) $(CFLAGS) -c includes/tableManager.cpp

symbolTable.o: includes/symbolTable.cpp includes/symbolTable.h
	$(CCC) $(CFLAGS) -c includes/symbolTable.cpp

functionTable.o: includes/functionTable.cpp includes/functionTable.h
	$(CCC) $(CFLAGS) -c includes/functionTable.cpp

literal.o:includes/literal.cpp includes/literal.h
	$(CCC) $(CFLAGS) -c includes/literal.cpp

poolOfNodes.o: includes/poolOfNodes.cpp includes/poolOfNodes.h \
  includes/node.h
	$(CCC) $(CFLAGS) -c includes/poolOfNodes.cpp
	
clean:
	rm -f run *.o parse.tab.c lex.yy.c
	rm -f parse.tab.h
