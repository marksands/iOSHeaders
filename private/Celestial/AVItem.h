//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AVItem : NSObject
{
    struct AVItemPrivate *_priv;
}

+ (id)avItemWithPath:(id)arg1 error:(id *)arg2;
+ (id)avItem;
- (void)cancelDownload;
- (int)downloadStatus;
- (float)downloadProgress;
- (void)stopDownload;
- (int)beginDownloading;
- (void *)downloadThread;
- (id)url;
- (id)urlFromPath:(id)arg1;
- (id)evenlySpacedThumbnailTimesFromStartTime:(double)arg1 toEndTime:(double)arg2 maxCount:(long long)arg3;
- (id)nextThumbnailTimesStartingAt:(double)arg1 minimumInterval:(double)arg2 forwards:(_Bool)arg3 maxCount:(long long)arg4;
- (id)chapterImageForImageID:(long long)arg1;
- (id)formatDetailsForTracks;
- (_Bool)setAttribute:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)attributeForKey:(id)arg1;
- (long long)eqPreset;
- (void)setEQPreset:(long long)arg1;
- (void)setVolume:(float)arg1;
- (float)volume;
- (struct CGSize)naturalSize;
- (double)duration;
- (id)path;
- (int)_instantiateItem;
- (_Bool)setPath:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithPath:(id)arg1 error:(id *)arg2;
- (id)init;
- (id)initWithError:(id *)arg1;
- (id)errorLog;
- (id)accessLog;

@end

