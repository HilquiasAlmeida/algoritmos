def knapsack(capacity, weights, values, n):
    dp = [[0 for x in range(capacity + 1)] for x in range(n + 1)]

    for i in range(n + 1):
        for w in range(capacity + 1):
            if i == 0 or w == 0:
                dp[i][w] = 0
            elif weights[i-1] <= w:
                dp[i][w] = max(values[i-1] + dp[i-1][w-weight], dp[i-1][w]) # type: ignore
            else:
                dp[i][w] = dp[i-1][w]

    return dp[n][capacity]

if __name__ == "__main__":
    values = [60, 100, 120]
    weights = [10, 20, 30]
    capacity = 50
    n = len(values)
    print(f"Valor máximo na Mochila (Python): {knapsack(capacity, weights, values, n)}")
