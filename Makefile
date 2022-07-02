NAME		= fungraph
HEADERS 	= -I/Users/npinto-g/.brew/include -I./graph_elements
SFML 		= -L/Users/npinto-g/.brew/lib -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system
CXXFLAGS	= -Wall -Wextra -Werror $(HEADERS)
LMNT_SRCS	= $(addprefix ./graph_elements/, Vertex.cpp Edge.cpp)
SRCS		= main.cpp $(LMNT_SRCS)
OBJS		= $(SRCS:.cpp=.o)

install : $(NAME)

$(NAME): $(OBJS)
	clang++ $(OBJS) $(HEADERS) $(SFML) -o $(NAME) 

clean:
	@echo "cleansed project"

fclean: clean
	@rm -fr $(NAME)

re: fclean install

.PHONY: install clean fclean re
