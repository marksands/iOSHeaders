//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSCHUnretainedParent.h"

@class TSCH3DChartMeshResources;

__attribute__((visibility("hidden")))
@interface TSCH3DChartMeshSharedChildResource : NSObject <TSCHUnretainedParent>
{
    TSCH3DChartMeshResources *mParent;
    _Bool mChildRegenerated;
    int mCaching;
    struct DataBufferInfo mBufferInfo;
    unsigned long long mResourceIdentifier;
}

+ (id)resourceWithParent:(id)arg1;
@property(nonatomic) _Bool childRegenerated; // @synthesize childRegenerated=mChildRegenerated;
@property(nonatomic) int caching; // @synthesize caching=mCaching;
- (id).cxx_construct;
@property(readonly, nonatomic) unsigned long long resourceIdentifier;
@property(readonly) struct DataBufferInfo bufferInfo;
- (void)clearParent;
- (void)dealloc;
- (id)initWithParent:(id)arg1;

@end

