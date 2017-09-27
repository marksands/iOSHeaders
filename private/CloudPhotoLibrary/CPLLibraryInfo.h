//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CPLAccountFlags, CPLFeatureVersionHistory, NSData, NSDictionary;

@interface CPLLibraryInfo : NSObject
{
    NSDictionary *_assetCounts;
    CPLFeatureVersionHistory *_featureVersionHistory;
    NSData *_lastKnownSyncAnchor;
    NSData *_accountFlagsData;
}

@property(copy, nonatomic) NSData *accountFlagsData; // @synthesize accountFlagsData=_accountFlagsData;
@property(copy, nonatomic) NSData *lastKnownSyncAnchor; // @synthesize lastKnownSyncAnchor=_lastKnownSyncAnchor;
@property(retain, nonatomic) CPLFeatureVersionHistory *featureVersionHistory; // @synthesize featureVersionHistory=_featureVersionHistory;
@property(copy, nonatomic) NSDictionary *assetCounts; // @synthesize assetCounts=_assetCounts;
- (void).cxx_destruct;
@property(readonly, nonatomic) CPLAccountFlags *accountFlags;
- (id)prettyDescriptionWithAnchorDesciptionBlock:(CDUnknownBlockType)arg1;

@end

