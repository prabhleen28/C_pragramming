 #include <Stdio.h>
 struct students
     {
         int roll_num;
         char name[20];
         float percent;
 }jiya, sanya, taran ,joy;
 int main(){
      struct students jiya ={1,"jiya",98.99};
      struct students sanya={2,"sanya",95.6};
      struct students taran={3,"taranjeet",99.99};
      struct students joy ={3};
      printf("%d %s %f \n",jiya.roll_num,jiya.name,jiya.percent);
      printf("%d %s %f \n",sanya.roll_num,sanya.name,sanya.percent);
      printf("%d %s %f \n",taran.roll_num,taran.name,taran.percent);
     return 0;
 }