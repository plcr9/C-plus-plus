std::string it_convo() {

  std::cout << "Hello. IT.\n";
  std::cout << "Have you tried turning it off and on again? y/n\n";

  std::string reply;
  std::cin >> reply;

}

int main() {

  std::string on_off_attempt;
  on_off_attempt = it_convo();

  std::cout << "Oh it Jen!\n";

  on_off_attempt = it_convo();

  std::cout << "You stole the sun from my heart? Yes, that's stealing!\n";

  on_off_attempt = it_convo();

}


