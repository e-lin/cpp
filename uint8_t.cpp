#include <cstdint>
#include <iostream>
using namespace std;

int main()
{
	uint8_t hmacKey[]={
		0x0b,0x0b,0x0b,0x0b,0x0b,0x0b,0x0b,0x0b,0x0b,0x0b,0x0b,0x0b,0x0b,0x0b,0x0b,0x0b,0x0b,0x0b,0x0b,0x0b
	};
	
	cout<<"PrintKey:\n";
	for( int i = 0; i < 20; i++ )
	{
		cout<<(unsigned int)hmacKey[i]<<" ";
	}
	
	
	// testValue
	unsigned long long testValue     = 0xFFFFFFFFFFFFFFFF; //18446744073709551615

	char* str = "Jefe";
	// 1 byte -> [0-255] or [0x00-0xFF]
	uint8_t         number8     = testValue; // 255
	unsigned char    numberChar    = testValue; // 255
	cout<<"\nTestValue:\n"<<testValue<<" "<<(unsigned int)number8<<" "<<(unsigned int)numberChar<<" "<<(uint8_t*)str<<endl;
	
	system("PAUSE");
	return 0;
}