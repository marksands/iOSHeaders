//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FCAssetStore;

@interface FCWebArchiveStore : NSObject
{
    FCAssetStore *_assetStore;
}

@property(retain, nonatomic) FCAssetStore *assetStore; // @synthesize assetStore=_assetStore;
- (void).cxx_destruct;
- (id)allWebArchiveKeys;
- (unsigned long long)totalSizeOfAllWebArchives;
- (_Bool)deleteWebArchiveForKey:(id)arg1;
- (_Bool)saveWebArchiveData:(id)arg1 forKey:(id)arg2;
- (id)webArchiveURLForKey:(id)arg1;
- (id)initWithStoreDirectory:(id)arg1;

@end

