#include "selection_sort.hpp"

namespace ns_cpp_examples {
    void selection_sort(std::vector<int>& v) {
        using diff_type = std::vector<int>::difference_type;
        auto size = v.size();
        for(diff_type i = 0, smallest = 0; i < size - 1; ++i, smallest = i) {
            for(diff_type j = i + 1; j < size; ++j) {
                if (v[j] < v[smallest])
                    smallest = j;
            }
            std::swap(v[i], v[smallest]);
        }
    }
}
