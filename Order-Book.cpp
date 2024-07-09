// add includes
// https://www.youtube.com/watch?v=XeLWe0Cx_Lg&t=289s


#include <iostream>
#include <map>
#include <set>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <limits>
#include <string>
#include <vector>
#include <numeric>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <memory>
#include <variant>
#include <optional>
#include <tuple>
#include <format>

enum class OrderType
{
    GoodTillCancel,
    FillAndKill
};

enum class Side
{
    Buy,
    Sell
};


using Price = std::int32_t;
using Quantity = std::uint32_t;
using OrderId = std::uint64_t;

struct LevelInfo
{
    Price price_;
    Quantity quantity_;
};

using LevelInfos = std::vector<LevelInfo>;

class OrderbookLevelInfos
{
    public:
    OrderbookLevelInfos(const LevelInfos& bids, const LevelInfos& asks)
    :bids_ {bids}
    ,asks_ { asks }
    {}

    const LevelInfos&GetBids() const{}


};

int main()
{
    return 0;
}