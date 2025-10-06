#ifndef SUNXI_PRIVATE_HANDLE_H
#define SUNXI_PRIVATE_HANDLE_H

#include "mali-bifrost/gralloc/src/mali_gralloc_buffer.h"

namespace sunxi {

static inline const private_handle_t* from(buffer_handle_t buf) {
    return (const private_handle_t*)(buf);
}

} // namespace sunxi

#endif
