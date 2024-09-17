// assuming this type signature
func(std::pair<const char *, double>)

// compilation error
func(std::make_pair(NULL, 3.14))
// NULL expands to 0
func(std::make_pair(0, 3.14))
// With signature
func(std::pair<int, double>)

// correctly compiles
func(std::make_pair(nullptr, 3.14))
// With signature
func(std::pair<const char *, double>)
