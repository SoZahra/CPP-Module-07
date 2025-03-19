/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 15:02:17 by fzayani           #+#    #+#             */
/*   Updated: 2025/03/18 16:47:30 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_CPP
#define ARRAY_CPP

#include <exception>
#include <cstdlib>

template <typename T>
class Array {
	private :
		T* elements;
		unsigned int length;

	public :
		Array();
		Array(unsigned int n);
		Array(const Array& other);
		Array& operator=(const Array& other);
		~Array();

		T& operator[](unsigned int i);
		const T& operator[] (unsigned int i) const;
		unsigned int size() const;

};

#include "Array.tpp"

#endif