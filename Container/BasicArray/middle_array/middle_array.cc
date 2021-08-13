#include <cstddef>
template <class T, std::size_t N>
constexpr std::size_t size(const T (&)[N]) noexcept { return N; }

int main() {
    int arr[3];
    static_assert(size(arr) == 3, "Hello\n");
}