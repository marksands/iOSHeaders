//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPStoreModelRequestOperation.h"

@interface MusicStoreCuratorPlaylistsRequestOperation : MPStoreModelRequestOperation
{
    unsigned long long _requestType;
}

- (void)_produceIncrementalResponseWithLoadedItemMetadataResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_produceInitialResponseWithLoadedItemMetadataResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)produceResponseWithLoadedOutput:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id *)arg2;

@end

