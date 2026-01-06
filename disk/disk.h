#pragma once

// This module will handle low-level block-based read/write
// operations on the virtual disk image file (e.g., vdisk.img).
// It will expose functions to initialize the disk, read a block
// by block number, and write a block back to disk.