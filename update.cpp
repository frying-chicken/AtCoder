#include <filesystem>
#include <iostream>

int main()
{
    try
    {
        std::filesystem::path template_cpp = "template.cpp";
        std::filesystem::path ABC = "ABC";

        if (!std::filesystem::copy_file(template_cpp, ABC / "A.cpp", std::filesystem::copy_options::overwrite_existing) ||
            !std::filesystem::copy_file(template_cpp, ABC / "B.cpp", std::filesystem::copy_options::overwrite_existing) ||
            !std::filesystem::copy_file(template_cpp, ABC / "C.cpp", std::filesystem::copy_options::overwrite_existing) ||
            !std::filesystem::copy_file(template_cpp, ABC / "D.cpp", std::filesystem::copy_options::overwrite_existing) ||
            !std::filesystem::copy_file(template_cpp, ABC / "E.cpp", std::filesystem::copy_options::overwrite_existing) ||
            !std::filesystem::copy_file(template_cpp, ABC / "F.cpp", std::filesystem::copy_options::overwrite_existing) ||
            !std::filesystem::copy_file(template_cpp, ABC / "G.cpp", std::filesystem::copy_options::overwrite_existing) ||
            !std::filesystem::copy_file(template_cpp, ABC / "H.cpp", std::filesystem::copy_options::overwrite_existing) ||
            !std::filesystem::copy_file(template_cpp, ABC / "I.cpp", std::filesystem::copy_options::overwrite_existing) ||
            
            !std::filesystem::copy_file(template_cpp, "code.cpp", std::filesystem::copy_options::overwrite_existing))
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