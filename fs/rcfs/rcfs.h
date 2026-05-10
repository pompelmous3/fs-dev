/* SPDX-License-Identifier: GPL-2.0 */

#include <linux/fs_parser.h> // bleh...

struct inode *rcfs_get_inode(struct super_block *sb, const struct inode *dir,
	 umode_t mode, dev_t dev);
extern int rcfs_init_fs_context(struct fs_context *fc);
extern void rcfs_kill_sb(struct super_block *sb);

extern const struct fs_parameter_spec rcfs_fs_parameters[];
extern const struct file_operations rcfs_file_operations;
extern const struct inode_operations rcfs_file_inode_operations;
extern const struct inode_operations rcfs_dir_inode_operations;
