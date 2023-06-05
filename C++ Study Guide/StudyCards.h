#pragma once
#ifndef STUDYCARDS_H
#define STUDYCARDS_H

#include <iostream>
#include <string>

class StudyCards
{
public:
	StudyCards();
	StudyCards(std::string mainArg, std::string bodyArg);
	void modifyMain();
	void modifyBody();
private:
	std::string main;
	std::string body;
};
#endif