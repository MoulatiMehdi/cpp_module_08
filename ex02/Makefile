CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g

CXX = c++  
RM  = rm -rf 

DEPS = MutantStack.hpp MutantStack.tpp
SRCS =  main.cpp  

OBJS = $(SRCS:.cpp=.o) 
NAME = run 


all : $(NAME)

$(NAME) : $(OBJS) $(DEPS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

%.o : %.c $(DEPS)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean : 
	$(RM) $(OBJS)

fclean : clean 
	$(RM) $(NAME)

re : fclean all

.PHONY : re all fclean clean 
.SECONDARY : $(OBJS)
