NAME = megaphone

src = megaphone.cpp
obj = ${src:.cpp=.o}

FLAGS = -Wall -Wextra -Werror
CC = c++
all: ${NAME}

%.o: %.cpp
	${CC} ${FLAGS} -c $< -o $@

${NAME}: ${obj}
	${CC} ${FLAGS} ${obj} -o ${NAME}
clean:
	rm -rf ${obj}
fclean: clean
	rm -rf ${NAME}