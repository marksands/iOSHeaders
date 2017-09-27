//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSPDecoder.h"

@class NSObject<OS_dispatch_data>, NSString;

__attribute__((visibility("hidden")))
@interface TSPMemoryDecoder : NSObject <TSPDecoder>
{
    id <TSPMemoryDecoderDelegate> _delegate;
    NSObject<OS_dispatch_data> *_metadataDispatchData;
    NSObject<OS_dispatch_data> *_rootObjectComponentDispatchData;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_data> *rootObjectComponentDispatchData; // @synthesize rootObjectComponentDispatchData=_rootObjectComponentDispatchData;
@property(readonly, nonatomic) NSObject<OS_dispatch_data> *metadataDispatchData; // @synthesize metadataDispatchData=_metadataDispatchData;
- (void).cxx_destruct;
- (id)newReadChannelForDataWithIdentifier:(long long)arg1 info:(id)arg2;
- (id)newReadChannelForRootObjectComponent;
- (id)newReadChannelForMetadata;
- (id)initWithEncodedData:(id)arg1 delegate:(id)arg2;
- (id)initWithMetadataDispatchData:(id)arg1 rootObjectComponentDispatchData:(id)arg2 delegate:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

