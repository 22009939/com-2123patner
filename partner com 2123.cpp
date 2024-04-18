#include <iostream>
#include <string>

int main() {
    int numPartners;
    std::cout << "How many potential partners do you have? ";
    std::cin >> numPartners;

    for (int i = 0; i < numPartners; ++i) {
        std::string partnerName;
        int kindness, compatibility, sharedInterests;

        std::cout << "\nEnter details for Partner " << i + 1 << ":\n";
        std::cout << "Enter partner's name: ";
        std::cin >> partnerName;
        std::cout << "At a scale of (1-10) what is kindness level for " << partnerName << ": ";
        std::cin >> kindness;
        std::cout << "At a scale of  (1-10) how compatibility are you with " << partnerName << ": ";
        std::cin >> compatibility;
        std::cout << "At a scale of (1-10) what is the level of shared interests  between you and " << partnerName << ": ";
        std::cin >> sharedInterests;

        std::string compatibilityLevel;

        // compatibility level
        if (kindness >= 7) {
            if (compatibility >= 7) {
                if (sharedInterests >= 7) {
                    compatibilityLevel = "Perfect match!";
                } else {
                    compatibilityLevel = "Kind and compatible, but few shared interests.";
                }
            } else {
                compatibilityLevel = "Kind but less compatible.";
            }
        } else {
            compatibilityLevel = "Not kind enough.";
        }

        // Display compatibility level
        std::cout << "Compatibility level for you and " << partnerName << ": " << compatibilityLevel << "\n";
    }

    return 0;
}
