//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TCCancelDelegate.h"

@class NSCache, NSMutableDictionary, NSMutableSet, NSString;

@interface CMArchiveManager : NSObject <TCCancelDelegate>
{
    _Bool mIsThumbnail;
    _Bool mIsOnPhone;
    unsigned long long mPageCount;
    NSString *mPassphrase;
    NSMutableDictionary *mDrawableCache;
    NSString *mResourcePathPrefix;
    NSMutableSet *mPausedPaths;
    int mHeight;
    int mWidth;
    double mCommitInterval;
    _Bool mAutoCommit;
    NSCache *mStyleObjectCache;
}

+ (id)resourceTypeToExtension:(int)arg1;
+ (id)resourceTypeToMIME:(int)arg1;
+ (int)blipTypeToResourceType:(int)arg1;
@property(copy) NSString *passphrase; // @synthesize passphrase=mPassphrase;
- (void).cxx_destruct;
- (_Bool)isCancelled;
- (void)setHTMLWidth:(int)arg1;
- (void)setHTMLHeight:(int)arg1;
- (_Bool)isProgressive;
- (unsigned long long)pageCount;
- (void)setPageCount:(unsigned long long)arg1;
- (_Bool)isThumbnail;
- (void)setIsThumbnail:(_Bool)arg1;
- (id)appendResourcePathToName:(id)arg1;
- (id)resourcePathPrefix;
- (void)setResourcePathPrefix:(id)arg1;
- (id)cssStylesheetString;
- (void)addCssStyle:(id)arg1 withName:(id)arg2;
- (id)addCssStyle:(id)arg1;
- (id)addStyle:(id)arg1;
- (unsigned long long)resourceCount;
- (_Bool)isOnPhone;
- (void)setIsOnPhone:(_Bool)arg1;
- (_Bool)progressiveMappingIsPausedOnPath:(id)arg1;
- (void)restartProgressiveMappingOnPath:(id)arg1;
- (void)pauseProgressiveMappingOnPath:(id)arg1;
- (id)cachedPathForDrawable:(id)arg1;
- (id)addResourceForDrawable:(id)arg1 withType:(int)arg2 drawable:(id)arg3;
- (id)addResource:(id)arg1 withName:(id)arg2 type:(int)arg3;
- (id)addResource:(id)arg1 withType:(int)arg2;
- (id)_validateData:(id)arg1 withType:(int *)arg2;
- (void)setAutoCommit:(_Bool)arg1;
- (void)setCommitInterval:(double)arg1;
- (void)commitDataAtPath:(id)arg1;
- (void)closeResourceAtPath:(id)arg1;
- (void)pushCssToPath:(id)arg1;
- (void)pushText:(id)arg1 toPath:(id)arg2;
- (void)pushData:(id)arg1 toPath:(id)arg2;
- (id)copyResourceWithType:(int)arg1;
- (id)copyResourceWithName:(id)arg1 type:(int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

