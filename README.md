<h1>Programming project - C</h1>
<h2>Matrix sorting</h2>
<h2>Description</h2>

Given a matrix, sort each of the columns alternately in ascending and descending order by swapping (even - in ascending order, odd - in descending order).
<br />
<h2>Algorithm Description</h2>

Enter the size of the array N;
Generate random elements of array A [][];
Using the for loop, we go through all the columns;
If the column is odd (the remainder of dividing by 2 = 1), then start the cycle of sorting the elements in the column by the exchange method:
Assign the variable k (sorting boundary) to the value N-1;
Loop (while k>0) through the elements of the column up to the value of k; If the element is smaller than the next, swap them;
Reduce k by 1;
Otherwise:
Assign the variable k (sorting boundary) to the value N-1;
Loop (while k>0) through the elements of the column up to the value of k; If the element is larger than the next, swap them;
Reduce k by 1;
Print the sorted array A[][].

<br />

<h2>Algorithm diagram:</h2>
<img width="317" alt="Снимок экрана 2023-02-20 в 22 27 01" src="https://user-images.githubusercontent.com/87941256/220207224-0f0289f4-2925-4bbf-b19f-3a47f4ac4a07.png">


<h2>Example of the program result:</h2>
<img width="522" alt="Снимок экрана 2023-02-20 в 22 27 58" src="https://user-images.githubusercontent.com/87941256/220207313-7780a1df-b1cc-4b71-af17-6f92f24ef575.png">
<img width="463" alt="Снимок экрана 2023-02-20 в 22 28 12" src="https://user-images.githubusercontent.com/87941256/220207333-c497e424-853f-4f16-9f21-944af16ee492.png">
<img width="301" alt="Снимок экрана 2023-02-20 в 22 28 51" src="https://user-images.githubusercontent.com/87941256/220207381-16f498eb-d14d-4944-a977-a75294c831c6.png">

