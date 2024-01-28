#pragma once
#include<iostream>

class Exception : public std::exception {

public:
	Exception(const std::string& message);
	
	const char* what() const noexcept override;
	

private:
	std::string message;

};
