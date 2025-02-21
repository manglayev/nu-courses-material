/*
There is a directory with a random number of files. The task is to change names to start
from 1 to n. Example input: file_1.txt, file_2.jpg, file_3.mp3. Example output: 1.txt, 2.jpg,
3.mp3. Depending on the number of threads your PC supports, you need to allocate
each thread per file. Then loop. If your PC supports 2 threads: thread 1 changes name
of file_1.txt, thread 2 changes name of file 2.jpg then thread 1 changes name of
file_3.mp3. Optimize your solution with less work: If there are already files like 1.txt, 2.jpg
in the directory. Do you need to rename in that case or check-ing for names takes even
more work? Depending on what?
*/
