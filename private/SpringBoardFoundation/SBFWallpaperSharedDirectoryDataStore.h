//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpringBoardFoundation/SBFWallpaperDirectoryDataStore.h>

@interface SBFWallpaperSharedDirectoryDataStore : SBFWallpaperDirectoryDataStore
{
}

+ (id)defaultDirectoryURL;
- (void)removeWallpaperOptionsForVariants:(long long)arg1;
- (_Bool)setWallpaperOptions:(id)arg1 forVariants:(long long)arg2;
- (id)wallpaperOptionsForVariant:(long long)arg1;
- (id)wallpaperOptionsURLForVariant:(long long)arg1;
- (void)didWriteFileToURL:(id)arg1;
- (id)directoryCreationAttributes;

@end

