def make_multiplier_of(n):
    def multiplier(x):
        return x * n
    return multiplier

# multiplicador por 3
times3 = make_multiplier_of(3)

# multiplicador por 5
times5 = make_multiplier_of(5)

# salida 27
print(times3(9))

# salida 15
print(times5(3))

# salida 30
print(times5(times3(2)))