#include <memory>
#include <vector>

void f() {

    // ...
    // Assume circle is a defined class
    auto p = std::make_shared<circle>( 42 );
    std::vector<std::shared_ptr<shape>> v = load_shapes();

    for ( auto &  s : v) 
        if ( s && *s == *p )
            std::cout << *s << " is a match.\n";
}