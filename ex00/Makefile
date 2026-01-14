CXXFLAGS = -Wall -Wextra -Werror -std=c++98

CXX = c++  
RM  = rm -rf 

DEPS = easyfind.hpp
SRCS = main.cpp  

OBJS = $(SRCS:.cpp=.o) 
NAME = ex00 


all : $(NAME)

$(NAME) : $(OBJS) $(DEPS)
	$(CXX) $(CXXFLAGS) -o $@ $<

%.o : %.c $(DEPS)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean : 
	$(RM) $(OBJS)

fclean : clean 
	$(RM) $(NAME)

re : fclean all

.PHONY : re all fclean clean 
.SECONDARY : $(OBJS)
