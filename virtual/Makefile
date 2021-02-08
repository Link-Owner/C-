UKEY_SO_OBJS += /home/jun/code/seclogin/u_key/special_key/tg_figer_vein/src/impl.o
CPPFLAGS_SHARED+=-shared
CPPFLAGS += -I./

TARGET += libib.so

.PHONY:all
all: $(TARGET)

libib.so : $(UKEY_SO_OBJS)	
	$(CXX) $(CPPFLAGS) $(CPPFLAGS_SHARED) -g -o libib.so $(UKEY_SO_OBJS)


.PHONY:clean

clean:
	rm -rf *.o 
	rm -rf *.so
