int main() {
  class Song {
    std::string title;

  public:
    void add_title(std::string new_title);
    std::string get_title();
};

void Song::add_title(std::string new_title) {
    title = new_title;
}

std::string Song::get_title() {
  return title;

}
