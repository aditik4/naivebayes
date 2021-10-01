#include <string>

namespace naivebayes {

class Training {
private:
    std::vector<Image> images_;
 public:
  std::string GetBestClass() const;
  Training();
  int At(size_t index) const;
  void PushBack(int element);
  void Clear();
  friend std:ostream& operator<<(std::ostream& os, const Training& vector);
  friend std::instream& operator>>(std::instream& is, Training& vector);
};

}  // namespace naivebayes

/*
TODO: rename this file. You'll also need to modify CMakeLists.txt.

You can (and should) create more classes and files in include/core (header
 files) and src/core (source files); this project is too big to only have a
 single class.

Make sure to add any files that you create to CMakeLists.txt.

TODO Delete this comment before submitting your code.
*/
