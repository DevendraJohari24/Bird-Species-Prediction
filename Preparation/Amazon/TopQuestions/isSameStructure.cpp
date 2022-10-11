int isSameStructure(Node *a, Node *b)
{
    // 1. both empty
    if (a == NULL && b == NULL)
        return 1;
    // Same structure only
    // 2. both non-empty -> compare them
    if (a != NULL && b != NULL)
    {
        return (
            isSameStructure(a->left, b->left) &&
            isSameStructure(a->right, b->right));
    }
    // Same structure and same data
    // /* 2. both non-empty -> compare them */
    // if (a != NULL && b != NULL)
    // {
    //     return (
    //         a->data == b->data &&
    //         identicalTrees(a->left, b->left) &&
    //         identicalTrees(a->right, b->right));
    // }

    // 3. one empty, one not -> false
    return 0;
}