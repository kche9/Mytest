#pragma once
#include "StdAfx.h"
#include "UserMenuItem.h"
using namespace login;

MenuItem::MenuItem(){}
MenuItem::~MenuItem(){}

string MenuItem::getId()
{
	return id;
}

string MenuItem::getText()
{
	return text;
}

vector<MenuItem>& MenuItem::getChildItems()
{
	return childItems;
}