#include <vector>
using namespace std;
struct Node
{
	int x, y;//�γɵ�ǰ����״̬���һ���ߵ���
	int ChessSide;//�γɵ�ǰ����״̬���һ���ߵ�һ��
	int winner;//��ǰ����״̬�Ƿ��ѷ�ʤ��ƽ,δ��ʤ����Ϊ-1���ѷ�ʤ�������ʤ����0ƽ�֣�1�û�Ӯ��2����Ӯ
	int visit_time;//���ڵ�ķ��ʴ���
	double profit;//���ڵ�������棬last_ChessSideʤ��1������-1��ƽ�ֵ�0
	Node *parent;
	vector<Node*> Child;

	Node(Node *parentf, int xf, int yf, int ChessSidef);
	Node();
	~Node();
};