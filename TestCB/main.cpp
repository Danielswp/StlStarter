#include <iostream>
#include <utility>
using namespace std;

template<typename T1, typename T2>
std::ostream& operator << (std::ostream& strm, const std::pair<T1, T2>& p)
{
    return strm << "[" << p.first << "," << p.second << "]";
}

typedef std::pair<int, char> IntCharPair;

void call

int main()
{

    IntCharPair mymap{10,'g'};
    //cout << u8"²âÊÔ:"<< mymap.first << " ==>"<< mymap.second << endl;
    std::cout << mymap << std::endl;
    std::cout << std::get<0>(mymap) << u8" ---- " <<std::get<1>(mymap) << std::endl;
    std::cout << std::tuple_size<std::pair<int, char>>::value;

    return 0;
}
