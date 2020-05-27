# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def convertBST(self, root: TreeNode) -> TreeNode:
        self.sum = 0
        
        def compute(root):
            if not root: return
            compute(root.right)
            self.sum += root.val
            root.val = self.sum
            compute(root.left)
        compute(root)
        
        return root
