#include <vector>

double calcAverage(const std::vector<int>& values){
    double sum = 0.0;

    if (!values.empty()) {
        for (const double& value : values) {
            sum += value;
        }
        return (sum / values.size());
    }
    else {
        return 0;
    }
}