/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 12:02:53 by ataji             #+#    #+#             */
/*   Updated: 2022/12/30 21:13:18 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

// int main( void ) {
//     std::cout << "================= int =================" << std::endl;
//     int a = 2;
//     int b = 3;
//     std::cout << "---------------- before swap ----------------" << std::endl;
//     std::cout << "a = " << a << ", b = " << b << std::endl;
//     swap( a, b );
//     std::cout << std::endl;
//     std::cout << "---------------- after swap ----------------" << std::endl;
//     std::cout << "a = " << a << ", b = " << b << std::endl;
//     std::cout << std::endl;
//     std::cout << "================== int min and max function =================" << std::endl;
//     std::cout << "-------------------- min function -----------------" << std::endl;
//     std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
//     std::cout << std::endl;
//     std::cout << "-------------------- max function -----------------" << std::endl;
//     std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
//     std::cout << std::endl;
//     std::cout << "================= strings =================" << std::endl;
//     std::string c = "chaine1";
//     std::string d = "chaine2";
//     std::cout << "---------------- before swap ----------------" << std::endl;
//     std::cout << "c = " << c << ", d = " << d << std::endl;
//     swap(c, d);
//     std::cout << std::endl;
//     std::cout << "---------------- after swap ----------------" << std::endl;
//     std::cout << "c = " << c << ", d = " << d << std::endl;
//     std::cout << std::endl;
//     std::cout << "================= string min and max function =================" << std::endl;
//     std::cout << "------------------ min function ----------------" << std::endl;
//     std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
//     std::cout << std::endl;
//     std::cout << "------------------ max function ----------------" << std::endl;
//     std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
//     return 0;
// }

class Awesome{
    public:
        Awesome(): _n(0) {}
        Awesome(int n): _n(n) {}
        Awesome& operator=(Awesome& a){_n = a._n; return *this;}
        bool operator==(Awesome const & rhs) const {return (this->_n == rhs._n);}
        bool operator!=(Awesome const &rhs) const {return (this->_n != rhs._n);}
        bool operator<(Awesome const & rhs) const {return (this->_n < rhs._n);}
        bool operator>(Awesome const & rhs) const {return (this->_n < rhs._n);}
        bool operator<=(Awesome const & rhs) const {return (this->_n < rhs._n);}
        bool operator>=(Awesome const & rhs) const {return (this->_n < rhs._n);}
        int get_n() const {return _n;}
    private:
        int _n;
};

std::ostream & operator<<(std::ostream & o, const Awesome & a) {o << a.get_n(); return o;}

int main(){
    Awesome a(2), b(4);
    swap(a, b);
    std::cout << a << " " << b << std::endl;
    std::cout << max(a, b) << std::endl;
    std::cout << min(a, b) << std::endl;
    return 0;
}
