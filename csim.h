/*
 * Header file for cahce simulator
 */

#ifndef CSIM_H
#define CSIM_H

#include <string>
#include <map>
#include <list>
#include <stdint.h>

void store_lru(std::map<int, std::list<uint32_t>> &cache, uint32_t address, int n_blocks,
	   int* store_hits, int* store_misses, int* evictions, int index,
	   std::string allocation);
void store_fifo(std::map<int, std::list<uint32_t>> &cache, uint32_t address, int n_blocks,
           int* store_hits, int* store_misses, int* evictions, int index,
           std::string allocation);

void load_lru(std::map<int, std::list<uint32_t>> &cache, uint32_t address, int n_blocks,
	  int* load_hits, int* load_misses, int* evictions, int index);

void load_fifo(std::map<int, std::list<uint32_t>> &cache, uint32_t address, int n_blocks,
          int* load_hits, int* load_misses, int* evictions, int index);

#endif /* CSIM_H */
