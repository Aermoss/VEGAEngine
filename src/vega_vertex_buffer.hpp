#pragma once

#include <glad/glad.h>

#include "vega_vertex.hpp"

#include <vector>

namespace vega {
    class VEGAVertexBuffer {
        private:
            unsigned int id;

        public:
            VEGAVertexBuffer(std::vector <VEGAVertex>& vertices);
            ~VEGAVertexBuffer();

            void bind();
            void unbind();
            void destroy();
    };
}