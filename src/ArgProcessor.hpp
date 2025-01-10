#pragma once
#include "Regex.hpp"
#include <filesystem>
#include <string>
#include <vector>

struct Opts {
  bool stdInclude2Import;
  std::filesystem::path inDir;
  std::filesystem::path outDir;
  re::Pattern includeGuardPat;
  std::string hdrExt;
  std::string srcExt;
  std::string moduleInterfaceExt;
  std::vector<std::filesystem::path> includePaths;
  std::vector<std::filesystem::path> ignoredHeaders;
};

Opts getOptsOrExit(int argc, const char* const* argv, bool& verbose);
