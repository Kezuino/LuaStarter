#pragma once
#include <filesystem>
#include <set>
#include <string>


class ResourceManager {
public:
	bool fileExists(const std::string& fileName);
	std::string readFileContents(const std::string& fileName);
	std::string guessFilePath(const std::string& filename, const std::string& type);
	bool isFileType(const std::string& filename, const std::string& type);
	std::string resolvePath(const std::string& path);
	bool directoryExists(const std::string& directoryName);
	std::list<std::string> listDirectoryFiles(const std::string& directoryPath = "", bool fullPath = false, bool raw = false, bool recursive = false);
};
extern ResourceManager g_resources;