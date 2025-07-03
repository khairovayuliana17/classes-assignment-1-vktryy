
// declare MagicBook class here
#include <string>
class MagicBook {
  public:
    enum class BookClass { SMALL, MEDIUM, LARGE };
    std::string title = "";
    int year = 0;
    int pages = 0;
};
MagicBook::BookClass evaluateBookSize(const MagicBook& book);
bool isFromArcaneYear(const MagicBook& book);
