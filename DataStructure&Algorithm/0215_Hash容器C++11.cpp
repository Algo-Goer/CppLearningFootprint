unordered_map<string,int> um
{
    {"Dijkstra", 1972}, {"Scott", 1976},
    {"Wilkes", 1967}, {"Hamming", 198}
};
um['Ritchie'] = 1983;
for (auto x : um)
{
    cout << '{' << x.first << ',' << x.second << '}';