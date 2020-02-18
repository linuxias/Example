TARGET = lttng_ust_test

CC = gcc
CFLAGS = -c -g -finstrument-functions
LDFLAGS = -llttng-ust -llttng-ust-fork -llttng-ust-fd -llttng-ust-cyg-profile -ldl

INC+=-I.

OBJS+=tp.o
OBJS+=main.o

all : $(TARGET)

$(TARGET) : $(OBJS) 
	$(CC) -o $@ $^ $(LDFLAGS)

.c.o:
	$(CC) $(INC) $(CFLAGS) $<

clean:
	rm -f $(OBJS) $(TARGET)
