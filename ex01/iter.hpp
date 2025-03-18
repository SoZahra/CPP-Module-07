/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 14:23:20 by fzayani           #+#    #+#             */
/*   Updated: 2025/03/18 14:32:38 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_CPP
#define ITER_CPP

#include <cstddef>

template <typename T>
void iter(T* array, size_t lenght, void (*f)(T const &) ){
	for(size_t i = 0; i < lenght; i++){
		f(array[i]);
	}
}

#endif