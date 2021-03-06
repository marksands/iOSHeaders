//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface TIAssetsForInputModeLevel : NSObject
{
    NSMutableDictionary *_assetsByAttributes;
    long long _numberOfAssertions;
    NSString *_inputModeLevel;
}

@property(readonly, nonatomic) NSString *inputModeLevel; // @synthesize inputModeLevel=_inputModeLevel;
- (void).cxx_destruct;
- (_Bool)isEmpty;
- (void)removeEmptyAssets;
- (_Bool)purgeAsset:(id)arg1;
- (id)purgeableAssets;
- (_Bool)hasAssertions;
- (void)removeAssertion;
- (void)addAssertion;
- (id)assetContentItemsMatching:(id)arg1;
- (void)addAsset:(id)arg1;
- (id)assetVersionsForAttributes:(id)arg1;
- (void)gatherStatistics:(id)arg1;
- (id)recursiveDescription;
- (id)initWithInputModeLevel:(id)arg1;

@end

