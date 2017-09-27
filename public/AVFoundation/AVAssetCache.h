//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AVAssetCache : NSObject
{
}

+ (id)assetCacheWithURL:(id)arg1;
- (id)allKeys;
- (id)lastModifiedDateOfEntryForKey:(id)arg1;
- (long long)sizeOfEntryForKey:(id)arg1;
- (void)removeEntryForKey:(id)arg1;
- (id)URL;
- (long long)currentSize;
- (long long)maxEntrySize;
- (long long)maxSize;
@property(readonly, nonatomic, getter=isPlayableOffline) _Bool playableOffline;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)_init;

@end

