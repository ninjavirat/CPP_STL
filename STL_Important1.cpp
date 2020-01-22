Note: For the next(), prev() or advance() functions,
If the iterator is a random access iterator, they are going to work in O(1) time as the increments or decrements can be done directly.

If the iterator is a forward iterator, they are going to work in O(n) time as the increments would be done one by one. Here n can never be negative, as in forward iterators one cannot traverse back into location.

If the iterator is a bidirectional iterator, n can both be negative and positive, to traverse back and forth.
/*********************************************************************************************************************