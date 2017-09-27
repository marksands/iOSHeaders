//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface PSQuotaInfo : NSObject
{
    NSMutableDictionary *_mediaKindDict;
    unsigned long long _totalStorage;
    unsigned long long _usedStorage;
}

@property(nonatomic) unsigned long long usedStorage; // @synthesize usedStorage=_usedStorage;
@property(nonatomic) unsigned long long totalStorage; // @synthesize totalStorage=_totalStorage;
- (void).cxx_destruct;
- (unsigned long long)storageInUseForMediaKind:(long long)arg1;
- (void)setStorageInUse:(unsigned long long)arg1 forMediaKind:(long long)arg2;
- (id)init;

@end

