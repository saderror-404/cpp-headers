# cpp-headers

This repositry is just for me to add and share my headers without flooding my github repostries with headers.

## Random.hpp

Random.hpp is used with Random::getGen() and Random::getInt(min, max).

### getGen:
```
static std::random_device rd;
static std::mt19937 gen(rd());
return gen;
```

### getInt:
```
std::uniform_int_distribution<int> dist(min, max);
return dist(getGen());
```
