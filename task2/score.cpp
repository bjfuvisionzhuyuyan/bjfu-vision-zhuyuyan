#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

int main() {
    int n;
    std::cout << "请输入分数个数N：";
    std::cin >> n;
    std::vector<double> scores(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> scores[i];
    }

    double max_val = *std::max_element(scores.begin(), scores.end());
    double min_val = *std::min_element(scores.begin(), scores.end());
    double sum = 0;
    for (auto s : scores) sum += s;
    double avg = sum / n;

    std::vector<double> sorted = scores;
    std::sort(sorted.begin(), sorted.end(), std::greater<double>());

    std::cout << "最大值：" << max_val << "\n";
    std::cout << "最小值：" << min_val << "\n";
    std::cout << std::fixed << std::setprecision(2) << "平均值：" << avg << "\n";
    std::cout << "从高到低排序：";
    for (auto s : sorted) std::cout << s << " ";
    std::cout << "\n";
}
