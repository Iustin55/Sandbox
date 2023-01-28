#pragma once
#include <glad/glad.h>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Shader
{
	public:
		// the program ID
		unsigned int ID;

		// Constructor
		Shader(const char*, const char*);

		// Use the shader program
		void use();

		// Utility functions
		void setBool(const std::string, bool) const;
		void setInt(const std::string, int) const;
		void setFloat(const std::string, float) const;
};