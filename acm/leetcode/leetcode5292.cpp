class Solution {

public:
        int getHeight(Node n){
            if(n!=null){
                return n.height;
            }
            return 0;
        }
        int getBalance(Node n){
            if(n!=null){
                return getHeight(n.left) - getHeight(n.right);
            }
            return 0;
        }

         Node rightRotate(Node y){
            Node x=y.left;
            Node T2=x.right;
            //rotation        x.right=y;        y.left=T2;
            x.height=Math.max(getHeight(x.left),getHeight(x.right))+1;
            y.height=Math.max(getHeight(y.left),getHeight(y.right))+1;
            return x;
        }
        Node leftRotate(Node x){
            Node y=x.right;
            Node T2=y.left;
            //Rotation        y.left=x;        x.right=T2;
            //update height
            x.height=Math.max(getHeight(x.left),getHeight(x.right))+1;
            y.height=Math.max(getHeight(y.left),getHeight(y.right))+1;
            return y;
        }
        Node insert(Node node, int data){
            if(node==null){
                return new Node(data);
            }
            if(node.data>data){
                node.left=insert(node.left,data);
            }else if(node.data<data){
                node.right=insert(node.right,data);
            }else {
                return node;// 已经存在
                // }
        }
};