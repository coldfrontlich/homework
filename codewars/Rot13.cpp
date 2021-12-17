#include <string>
std::string rot13(std::string msg) {
  for (char& c : msg) {
    switch (c) {
      case 'A'...'M': case 'a'...'m': c += 13; break;
      case 'N'...'Z': case 'n'...'z': c -= 13; break;
    }
  }
  return msg;
}
