import java.util.*;

public class Solution {
    public static int[] departmentReputation(int[] learningEfficiency, int[] idE, int[][] employeeSelected) {
        int[] answer = new int[employeeSelected.length]; // Initialize array to store results

        // Calculate initial team efficiencies
        Map<Integer, Integer> teamEfficiency = new HashMap<>();
        for (int i = 0; i < learningEfficiency.length; i++) {
            int teamID = idE[i];
            teamEfficiency.put(teamID, teamEfficiency.getOrDefault(teamID, 0) + learningEfficiency[i]);
        }

        // Process each learning project
        for (int i = 0; i < employeeSelected.length; i++) {
            int selectedEmployee = employeeSelected[i][0];
            int K = employeeSelected[i][1];

            int teamID = idE[selectedEmployee - 1];
            List<Integer> teamMembers = new ArrayList<>();
            for (int j = 0; j < learningEfficiency.length; j++) {
                if (idE[j] == teamID) {
                    teamMembers.add(j);
                }
            }
            teamMembers.sort(Comparator.comparingInt(a -> learningEfficiency[a]));

            // Select main employee and K employees with lowest efficiency from the same team
            List<Integer> selectedEmployees = new ArrayList<>();
            selectedEmployees.add(selectedEmployee - 1);
            for (int j = 0; j < K && j < teamMembers.size(); j++) {
                selectedEmployees.add(teamMembers.get(j));
            }

            // Update efficiency to 0 for selected employees
            for (int employee : selectedEmployees) {
                if (employee != selectedEmployee - 1) {
                    teamEfficiency.put(teamID, teamEfficiency.get(teamID) - learningEfficiency[employee]);
                }
                learningEfficiency[employee] = 0;
            }

            // Recalculate total efficiency of the department
            int totalEfficiency = 0;
            for (int efficiency : teamEfficiency.values()) {
                totalEfficiency += efficiency;
            }

            answer[i] = totalEfficiency;
        }

        return answer;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        // Input for learningEfficiency
        int learningEfficiency_size = in.nextInt();
        int learningEfficiency[] = new int[learningEfficiency_size];
        for (int idx = 0; idx < learningEfficiency_size; idx++) {
            learningEfficiency[idx] = in.nextInt();
        }

        // Input for idE
        int idE_size = in.nextInt();
        int idE[] = new int[idE_size];
        for (int idx = 0; idx < idE_size; idx++) {
            idE[idx] = in.nextInt();
        }

        // Input for employeeSelected
        int employeeSelected_row = in.nextInt();
        int employeeSelected_col = in.nextInt();
        int employeeSelected[][] = new int[employeeSelected_row][employeeSelected_col];
        for (int idx = 0; idx < employeeSelected_row; idx++) {
            for (int jdx = 0; jdx < employeeSelected_col; jdx++) {
                employeeSelected[idx][jdx] = in.nextInt();
            }
        }

        int[] result = departmentReputation(learningEfficiency, idE, employeeSelected);
        for (int idx = 0; idx < result.length - 1; idx++) {
            System.out.print(result[idx] + " ");
        }
        System.out.print(result[result.length - 1]);
    }
}
