#pragma once
#include <string>

std::string fileName;

// 1-й канал
const std::string fileNamePolikrR5 = "";
const std::string fileNamePolikrR6 = "";
const std::string fileNamePolikrR9 = "";
// 2-й канал
const std::string fileNameAZOR1 = "";
const std::string fileNameAZOR2 = "";
const std::string fileNameAZOR3 = "";
const std::string fileNameAZOR4 = "";
// 3-й канал
	//	
const std::string fileNameNitridR1 = "";
const std::string fileNameNitridR3 = "";	
const std::string fileNameNitridR4 = "";
	// 
const std::string fileNameNitridR5 = "";

// параметры для посика строки со временем в RTForm.h
int nSTSHPolikr = 16;
int nSTSHAZO = 14;
// 3-й канал
	// 
int nSTSHFSS = 15;
	// 
int nSTSHNitrid = 16;

// параметры для посика и замены строк в ReplaceRT.h
std::string version;
// 1-й канал
std::string versionPolikr = "";
// 2-й канал
std::string versionAZO = "";
// 3-й канал
std::string versionNitrid = "";

int nSTS;
int nSTR;
// 1-й канал
int nSTSPolikr = 16;
int nSTRPolikr = 15;
// 2-й канал
int nSTSAZO = 14;
int nSTRAZO = 13;
// 3-й канал
	// 
int nSTSFSS = 15;
int nSTRFSS = 14;
	// 
int nSTSNitrid = 16;
int nSTRNitrid = 15;
