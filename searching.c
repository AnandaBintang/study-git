int sequential_search(int *list, int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (list[i] == key)
            return i;
    }
    return -1;
}