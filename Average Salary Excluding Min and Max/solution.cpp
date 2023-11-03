class Solution {
public:
    double average(vector<int>& salary) {
        size_t i;
        double sum=0,min_salary=salary[1],max_salary=salary[1];
        for(i=0;i<salary.size();i++){
            if(min_salary>salary[i])
                min_salary=salary[i];
            if(max_salary<salary[i])
                max_salary=salary[i];
            sum+=salary[i];
        }
        return (sum-(min_salary+max_salary))/(salary.size()-2);
    }
};