#pragma once
#include <exception>

class Login : public std::exception
{
public:
	const char* what() const noexcept override
	{
		return "Error: invalid login!";
	}
};

class Password : public std::exception
{
public:
	const char* what() const noexcept override
	{
		return "Error: invalid password!";
	}
};

class Login : public std::exception
{
public:
	const char* what() const noexcept override
	{
		return "Error: login is busy!";
	}
};

