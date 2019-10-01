#include <iostream>
using namespace std;

#include<type_traits>


template <typename T>
bool Equals(T lhs,T rhs){
	return Equals(lhs, rhs, conditional_t<is_floating_point<T>::value, true_type, false_type>{});
}


template <typename T>
bool Equals(T lhs, T rhs,true_type) {
	return true;
}


template <typename T>
bool Equals(T lhs, T rhs,false_type) {
	return Equals
}
