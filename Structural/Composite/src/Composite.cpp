#include <iostream>
#include <algorithm>
#include <cassert>
#include <functional>
#include <iterator>
#include <list>
#include <string>

using namespace std;

class Node
{
public:
    explicit Node(const std::string &n) : m_name(n) { assert(!n.empty()); }

    const std::string& get_name() const { return m_name; }

    void set_name(const std::string &n)
    {
        assert(!n.empty());
        m_name = n;
    }

    virtual Node* copy() const = 0;
    virtual ~Node() { }
    std::string m_name;

private:
    Node(const Node&);
    Node& operator=(const Node&);
};

class SimpleNode : public Node
{
private:
    SimpleNode(const std::string &n, const std::string &v) : Node(n), m_value(v)
    { assert(!n.empty()); }

public:
    static SimpleNode* create(const std::string &n, const std::string &v)
    {
        return new SimpleNode(n, v);
    }

    const std::string& get_value() const { return m_value; }

    void set_value(const std::string &v) { m_value = v; }

    SimpleNode* copy() const
    {
        assert(!get_name().empty());
        return SimpleNode::create(get_name(), get_value());
    }

private:
    std::string m_value;
    SimpleNode(const SimpleNode&);
    SimpleNode& operator=(const SimpleNode&);
};

class ComplexNode : public Node
{
private:
    explicit ComplexNode(const std::string &n) : Node(n) { assert(!n.empty()); }

    template<typename ITER>
    ComplexNode(const std::string &n, ITER b, ITER e) : Node(n), m_child_nodes(b, e)
    { assert(!n.empty()); }

public:
    static ComplexNode* create(const std::string &s) { return new ComplexNode(s); }

    template<typename ITER>
    static ComplexNode* create(const std::string &s, ITER b, ITER e)
    {
        return new ComplexNode(s, b, e);
    }

    typedef std::list<Node*> ChildNodes;
    const ChildNodes& get_child_nodes() const { return m_child_nodes; }

    void append_node(Node *n)
    {
        assert(n != 0);
        m_child_nodes.push_back(n); 
    }

    void remove_node(Node *nd)
    {
        assert(nd != 0);
        ChildNodes &c = m_child_nodes;
        ChildNodes::iterator i = std::find(c.begin(), c.end(), nd);
        if (i != c.end()) {
            c.erase(i);
        }
    }
	
    ComplexNode* copy() const
    {
        assert(!get_name().empty());
        ChildNodes c;
        copy_children(c);
        return ComplexNode::create(get_name(), c.begin(), c.end());
    }

    ~ComplexNode()
    {
        const ChildNodes &c = get_child_nodes();
        ChildNodes::const_iterator b = c.begin();
        for ( ; b != c.end(); ++b) delete *b;

    }

private:
    void copy_children(ChildNodes &c) const
    {
        assert(c.empty());
        const ChildNodes &t = get_child_nodes();
        std::transform(t.begin(), t.end(), std::back_inserter(c),
                       std::mem_fun(&Node::copy));
        assert(c.size() == t.size());
    }

    ChildNodes m_child_nodes;

    ComplexNode(const ComplexNode&);
    ComplexNode& operator=(const ComplexNode&);
};

int main()
{
	SimpleNode *sa = SimpleNode::create("simpleA", "sA");
	SimpleNode *sb = SimpleNode::create("simpleB", "sB");
	ComplexNode *ca = ComplexNode::create("cmplxA");
	ComplexNode *cb = ComplexNode::create("cmplxB");
	ComplexNode *cc = ComplexNode::create("cmplxC");
	ca->append_node(cb);
	ca->append_node(cc);
	cb->append_node(sa);
	cb->append_node(sb);

	list<Node*> nodes;
	nodes.push_back(ComplexNode::create("cmplx1"));
	nodes.push_back(ComplexNode::create("cmplx2"));
	list<Node*>::const_iterator b = nodes.begin(), e = nodes.end();
	ComplexNode *cd = ComplexNode::create("cmplx3", b, --e);

	return 0;
}