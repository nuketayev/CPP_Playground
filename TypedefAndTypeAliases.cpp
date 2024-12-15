 #include <iostream>
 #include <vector>

    // typedef std::vector<std::pair<std::string, int>> pairlist_t;
    // typedef std::string str_t;

    using pairlist_t = std::vector<std::pair<std::string, int>>;
    using str_t = std::string;

 int    main(){

    pairlist_t pairlist;
    str_t firstName = "Akzhol";

    std::cout << firstName << std::endl;

    return 0;
 }