# Userspace Virtual File System (VFS)
 
**Student:** Ronak Vataliya (B.Tech ICT 2nd Year)  


---

## 📌 Project Overview
**Userspace Virtual File System (VFS)** that simulates a disk-based filesystem within a single file (`vdisk.img`). It utilizes a layered architecture to separate raw block I/O from high-level filesystem logic and a command-line interface.

---


##  Disk Image 
The system uses a single file, `vdisk.img`, to simulate an entire physical disk. For a 4MB example, the disk is partitioned into logical zones to organize metadata and data storage.



**Disk Layout (4MB Example):**
| Section | Block Range | Description |
| :--- | :--- | :--- |
| **Superblock** | Block 0 | Filesystem metadata (block size, inode counts, etc.) |
| **Bitmap** | Blocks 1-4 | Tracking free vs. occupied blocks |
| **Inode Table** | Blocks 5-20 | Storage for file metadata |
| **Root Dir** | Block 21 | Entry point for the filesystem hierarchy |
| **Data Blocks** | Blocks 22+ | Actual content of the files |

**Block Access Math:**
Files are accessed by calculating the byte offset using the block size (default 4096 bytes).

## Interaction Between Inodes and Data Blocks

Inode are set of metadata that will act as bridge between file name and actual data stored in blocks.

