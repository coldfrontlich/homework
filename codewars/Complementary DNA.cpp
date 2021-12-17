#include <string>

std::string DNAStrand(const std::string dna)
{
  std::string out = "";
  for(unsigned int i = 0; i < dna.length(); ++i)
  {
    if (dna[i] == 'A')
      out += "T";
    if (dna[i] == 'T')
      out += "A";
    if (dna[i] == 'G')
      out += "C";
    if (dna[i] == 'C')
      out += "G";
  }
  return out;
}
