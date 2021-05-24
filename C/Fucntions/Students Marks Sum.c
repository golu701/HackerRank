

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
  int mark=0;
   if (gender=='b')
    {
        for(int i=0;i<number_of_students;i=i+2)
            mark+=marks[i];
    }
    else
    {
        for(int i=1;i<number_of_students;i=i+2)
            mark+=marks[i];
    }
    
  return mark;

}
