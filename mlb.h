
typedef struct {
  char *name;
  int wins;
  int loss;
  char *city;
  char *state;
  double payroll;
  double averageSalary;
} Team;

/**
 * A factory function to create a Team structure instance.
 */
Team *createTeam(char *name, int wins, int loss, char *city, char *state,
                 double payroll, double aveSalary);

/**
 * Reads in Team data from the given file, returns
 * an array of Teams.
 */
Team *readFile(const char *fileName);

/**
 * Prints a single team to the standard output.
 */
void printTeam(const Team *t);

/**
 * Prints an array of teams to the standard output.
 */
void printAllTeams(Team *teams, int size);

/**
 * An implementation of bubble sort that sorts the given teams
 * according to the given comparator.
 */
void bubbleSortTeams(Team *teams, int size,
                     int (*compar)(const void *, const void *));

/**
 * An implementation of selection sort that sorts the given teams
 * according to payroll.
 */
void selectionSortTeamsByPayroll(Team *teams, int size);

/**
 * An implementation of selection sort that sorts the given teams
 * according to the given comparator.
 */
void selectionSortTeams(Team *teams, int size,
                        int (*compar)(const void *, const void *));

/**
 * A comparator that orders Teams by name in lexicographic order.
 */
int teamComparisonByName(const void *s1, const void *s2);

/**
 * A comparator that orders Teams by win percentage (highest first)
 */
int teamComparisonByWinPercentage(const void *s1, const void *s2);

/**
 * A comparator that orders Teams by state.
 */
int teamComparisonByState(const void *s1, const void *s2);

/**
 * A comparator that orders Teams by state then by city.
 */
int teamComparisonByStateCity(const void *s1, const void *s2);

// TODO: add your comparator function definition(s) here
/*
 * A comparator that orders Teams by payroll in descending order
 */
int teamComparisonByPayroll(const void* s1, const void* s2);
