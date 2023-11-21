#include "CMakeProject1.h"
#include <fstream>
#include <filesystem>
#include <duckx/duckx.hpp>

int main() {

    duckx::Document doc("file.docx");
    doc.open();
    for (auto p = doc.paragraphs(); p.has_next(); p.next()) {
        for (auto r = p.runs(); r.has_next(); r.next()) {
            std::cout << r.get_text() << std::endl;
        }
    }
    return 0;
}
