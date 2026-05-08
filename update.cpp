#include <filesystem>
#include <iostream>

int main()
{
    try
    {

        if (!std::filesystem::copy_file("template.cpp", "ABC/A.cpp", std::filesystem::copy_options::overwrite_existing) ||
            !std::filesystem::copy_file("template.cpp", "ABC/B.cpp", std::filesystem::copy_options::overwrite_existing) ||
            !std::filesystem::copy_file("template.cpp", "ABC/C.cpp", std::filesystem::copy_options::overwrite_existing) ||
            !std::filesystem::copy_file("template.cpp", "ABC/D.cpp", std::filesystem::copy_options::overwrite_existing) ||
            !std::filesystem::copy_file("template.cpp", "ABC/E.cpp", std::filesystem::copy_options::overwrite_existing) ||
            !std::filesystem::copy_file("template.cpp", "ABC/F.cpp", std::filesystem::copy_options::overwrite_existing) ||
            !std::filesystem::copy_file("template.cpp", "ABC/G.cpp", std::filesystem::copy_options::overwrite_existing) ||
            !std::filesystem::copy_file("template.cpp", "ABC/H.cpp", std::filesystem::copy_options::overwrite_existing) ||
            !std::filesystem::copy_file("template.cpp", "ABC/I.cpp", std::filesystem::copy_options::overwrite_existing) ||
            !std::filesystem::copy_file("template.cpp", "code.cpp", std::filesystem::copy_options::overwrite_existing))
        {
            throw std::runtime_error("Failed to copy file");
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "Files copied successfully.\n";
}