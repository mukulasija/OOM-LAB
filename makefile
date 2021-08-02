all: Output

Output: functionality.cpp information.h information.cpp publisher.h publisher.cpp subscriber.h subscriber.cpp
	g++ -o Output functionality.cpp information.cpp publisher.cpp subscriber.cpp
clean:
	rm -f Output
#   cout<<"---------------------------------\n";
#         cout<<"        Select an option\n";
#         cout<<"---------------------------------\n";