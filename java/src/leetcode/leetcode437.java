package leetcode;

public class leetcode437 {
    // 给它一个节点和一个目标值，它返回以这个节点为根的树中，和为目标值的路径总数
    public int pathSum(TreeNode root, int sum) {
        if (root == null) {
            return 0;
        }
        return count(root, sum) + pathSum(root.left, sum) + pathSum(root.right, sum);

    }
    // 给它一个节点和一个目标值，它返回以这个节点为根的树中，能凑出几个以该节点为路径开头，和为目标值的路径总数
    public int count(TreeNode node, int sum) {
        if (node == null) {
            return 0;
        }
        return ((node.val == sum) ? 1:0)  + count(node.left, sum - node.val) + count(node.right, sum - node.val);
    }
}
