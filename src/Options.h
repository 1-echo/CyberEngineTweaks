#pragma once

#include "Image.h"

struct Options
{
    ~Options() = default;

    static void Initialize();
    static void Shutdown();
    static Options& Get();
    
    void Load();
    void Save();
    void ResetToDefaults(); 
    
    Image GameImage;
    UINT OverlayKeyBind{ 0 };
    bool PatchEnableDebug{ false };
    bool PatchRemovePedestrians{ false };
    bool PatchAsyncCompute{ false };
    bool PatchAntialiasing{ false };
    bool PatchSkipStartMenu{ false };
    bool PatchDisableIntroMovies{ false };
    bool PatchDisableVignette{ false };
    bool PatchDisableBoundaryTeleport{ false };
    bool PatchDisableWin7Vsync{ false };
    bool DumpGameOptions{ false };
    std::string FontPath;
    std::string FontGlyphRanges{""};
    float FontSize{ 13.0f };
    bool ExeValid{ false };
    bool IsFirstLaunch{ false };

private:
    Options();
};