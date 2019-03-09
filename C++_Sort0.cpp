#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <vector>
#include <initializer_list>
#include <map>

class Node
{
  public:
    Node(std::string name = "");
    Node(const Node &node);
    Node &operator=(const Node &node);

    bool operator<(const Node & rhs) const;
    bool operator==(const Node & rhs) const;

    void add_state(std::string statename);
    void add_child(Node *child);
    void add_parent(Node *parent);

    void set_probability(int e, double prob);

    double evaluate_marginal(std::string statename, int evidence);
    double evaluate_markov_blanket(std::string statename, int evidence);

  private:
    static int m_nodecount;

    // using vectors on these to preserve ordering information
    std::vector<Node *> m_parents;
    std::vector<Node *> m_children;
    std::vector<std::string> m_states;

    std::map<int, double> m_probabilities;
};

struct Interval
{
    int start, end;

    friend std::ostream &operator<<(std::ostream &out, const Interval &newObj);
};

std::ostream &operator<<(std::ostream &out, const Interval &newObj)
{
    out << "{ " << newObj.start << ", " << newObj.end << " }";
}

bool compareInterval(Interval I1, Interval I2)
{
    return I1.start < I1.start;
}

int main()
{
    Interval arr[] = {{6, 8}, {1, 9}, {2, 4}, {4, 7}};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::sort(arr, arr + n, compareInterval);

    std::cout << "Intervals sorted by start time: \n";
    for (int i = 0; i < n; ++i)
        std::cout << arr[i];
}