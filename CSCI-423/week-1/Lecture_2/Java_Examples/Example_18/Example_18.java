/*
There are several .txt files. You need to search for a particular text.
2.1. If there is an exact match with the input text. If it is the title or filename put first in the
search results, then order by frequency of appearance of this text in the files.
2.2. If there is no exact match, try to search without some words like the, a, in etc.
Maybe there is a close match. Then also: if it is the title/file name put first, then order by
frequency of appear-ance of this word in the text.
2.3. Use threads to search in each file and call another thread to wait and aggregate the
results when any other thread finishes the search.
2.4. Try to make this search for pdf files.
*/
