#include <core/training.h>

namespace naivebayes {

std::string Training::GetBestClass() const {
  return "CS 126";
}

Training::int At(size_t index) const {
    return images_.at(index);
}
Training::void PushBack(int element) {
    images_.push_back(element);
}
Training::void Clear() {
    images_.clear();
}
Training::friend std:ostream& operator<<(std::ostream& os, const Training& vector) {
    for(auto num: vector.images_) {
        os<<num<<" ";
    }
    return os;
}
Training::friend std::istream& operator>>(std::istream& is, Training& vector) {
    std::string line;
    if(std::getline(is, line)) {
        std::stringstream line_stream(line);
        std::string value_str;
        while(line_stream >> value_str) {
            vector.images_.push_back(stoi(value_str));
        }
    }
    return is;
}




}  // namespace naivebayes