/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 13:53:38 by ataji             #+#    #+#             */
/*   Updated: 2022/12/31 14:40:44 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(){
    static const int arr[] = {4, 1, 6, 7, 3, 5};
    std::vector<int> vec(arr, arr + sizeof(arr) / sizeof(arr[0]));
    easyfind(vec, 3);
    return 0;
}