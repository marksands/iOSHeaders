//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPIdentifierSet, MPModelFileAsset;

@interface MPModelVerifyLocalFileAssetIntegrityRequest : NSObject
{
    MPIdentifierSet *_sourceItemIdentifiers;
    MPModelFileAsset *_fileAsset;
}

+ (id)_operationQueue;
@property(retain, nonatomic) MPModelFileAsset *fileAsset; // @synthesize fileAsset=_fileAsset;
@property(retain, nonatomic) MPIdentifierSet *sourceItemIdentifiers; // @synthesize sourceItemIdentifiers=_sourceItemIdentifiers;
- (void).cxx_destruct;
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithFileAsset:(id)arg1 sourceItemIdentifiers:(id)arg2;

@end

